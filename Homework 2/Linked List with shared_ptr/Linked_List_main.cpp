//Linked_List_main.cpp
//Justyn P. Durnford
//Created on 1/30/2020
//Last Updated on 1/30/2020
//

//External Libraries
//#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

//User-created headers
#include "Hitbox_Circle.hpp"

//Standard Library
#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

#include <memory>
using std::shared_ptr;
using std::make_shared;

#include <algorithm>
using std::find;
using std::distance;

//Prints the attributes of the passed Hitbox_Circle.
void printHitbox_Circle(Hitbox_Circle& hb)
{
	cout << "ID: " << hb.ID << endl;
	cout << "Offsets: < " << hb.x_off << ", " << hb.y_off << ", " << hb.z_off << " >" << endl;
	cout << "Radius: " << hb.rad << endl;
	cout << "Damage: " << hb.damage << endl;
	cout << "Base Knockback: " << hb.bkb << endl;
	cout << "Knockback Scaling: " << hb.kbs << endl;
	cout << "Angle: " << hb.angle << endl;
}

//Prints hitbox_list.
void printhitbox_list(list<Hitbox_Circle>& hitbox_list)
{
	auto iter = hitbox_list.begin();
	while (iter != hitbox_list.end())
	{
		printHitbox_Circle(*iter);
		++iter;
	}
}

//Compares the hitboxes to see iif they are equal.
//Returns true if they are.
bool operator == (const Hitbox_Circle& hb1, const Hitbox_Circle& hb2)
{
	if ((hb1.ID == hb2.ID) && (hb1.x_off == hb2.x_off) &&
		(hb1.y_off == hb2.y_off) && (hb1.z_off == hb2.z_off) &&
		(hb1.rad == hb2.rad) && (hb1.damage == hb2.damage) &&
		(hb1.bkb == hb2.bkb) && (hb1.kbs == hb2.kbs) &&
		(hb1.angle == hb2.angle))
		return true;

	return false;
}

//Copies the values of hb1 onto hb2.
void copyHitbox_Circle(Hitbox_Circle& hb1, Hitbox_Circle& hb2)
{
	hb2.ID = hb1.ID;
	hb2.x_off = hb1.x_off;
	hb2.y_off = hb1.y_off;
	hb2.z_off = hb1.z_off;
	hb2.rad = hb1.rad;
	hb2.damage = hb1.damage;
	hb2.bkb = hb1.bkb;
	hb2.kbs = hb1.kbs;
	hb2.angle = hb1.angle;
}

//Returns the Hitbox_Circle at hitbox_list.front(), if it exists,
//and removes it from the list.
//If it does not exist, it returns a Hitbox_Circle with a negative
//ID, signifying an error.
Hitbox_Circle hitbox_listFIFO(list<Hitbox_Circle>& hitbox_list)
{
	if (!hitbox_list.empty())
	{
		Hitbox_Circle hb;
		copyHitbox_Circle(hitbox_list.front(), hb);
		hitbox_list.pop_front();
		return hb;
	}

	Hitbox_Circle hb{ -1 };
	return hb;
}

//Returns the Hitbox_Circle at hitbox_list.back(), if it exists,
//and removes it from the list.
//If it does not exist, it returns a Hitbox_Circle with a negative
//ID, signifying an error.
Hitbox_Circle hitbox_listLIFO(list<Hitbox_Circle>& hitbox_list)
{
	if (!hitbox_list.empty())
	{
		Hitbox_Circle hb;
		copyHitbox_Circle(hitbox_list.back(), hb);
		hitbox_list.pop_back();
		hitbox_list.back().next = nullptr;
		return hb;
	}

	Hitbox_Circle hb{ -1 };
	return hb;
}

//Searches hitbox_list to see if a Hitbox_Circle exists that matches up to hb.
//If it finds it, it returns the index.
//If it is not found, the function returns -1 and adds hb to the list.
int hitbox_listInsertAndFind(list<Hitbox_Circle>& hitbox_list, Hitbox_Circle& hb)
{
	auto iter = find(hitbox_list.begin(), hitbox_list.end(), hb);
	if (iter != hitbox_list.end())
	{
		int index = distance(hitbox_list.begin(), iter);
		return index;
	}

	hitbox_list.back().next = make_shared<Hitbox_Circle>(hb);
	hitbox_list.push_back(hb);
	return -1;
}

int main()
{
	//Initialize the list
	list<Hitbox_Circle> hitbox_list;

	Hitbox_Circle hb0{ 0, 0, 0, 0, 2000, 8.0, 40, 120, 45.0 };
	Hitbox_Circle hb1{ 1, 500, 250, 0, 300, 6.0, 40, 100, 45.0 };
	Hitbox_Circle hb2{ 2, 500, -250, 0, 300, 6.0, 40, 100, 45.0 };
	Hitbox_Circle hb3{ 3, -100, 300, 0, 500, 6.0, 40, 100, 45.0 };

	hb0.next = make_shared<Hitbox_Circle>(hb1);
	hb1.next = make_shared<Hitbox_Circle>(hb2);
	hb2.next = make_shared<Hitbox_Circle>(hb3);

	hitbox_list.push_back(hb0);
	hitbox_list.push_back(hb1);
	hitbox_list.push_back(hb2);
	hitbox_list.push_back(hb3);
	
	cout << "Current List: " << endl;
	printhitbox_list(hitbox_list);
	cout << endl;

	cout << "Demonstrating FIFO" << endl;
	Hitbox_Circle hb4 = hitbox_listFIFO(hitbox_list);
	cout << "Removed first Hitbox" << endl;
	cout << "Current List: " << endl;
	printhitbox_list(hitbox_list);
	cout << endl;

	cout << "Demonstrating LIFO" << endl;
	Hitbox_Circle hb5 = hitbox_listLIFO(hitbox_list);
	cout << "Removed last Hitbox" << endl;
	cout << "Current List: " << endl;
	printhitbox_list(hitbox_list);
	cout << endl;

	cout << "Removed Hitboxes: " << endl;
	printHitbox_Circle(hb4);
	printHitbox_Circle(hb5);

	return 0;
}