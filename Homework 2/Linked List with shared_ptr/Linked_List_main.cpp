//Linked_List_main.cpp
//Justyn P. Durnford
//Created on 1/30/2020
//Last Updated on 1/30/2020
//

//External Libraries
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

//Prints the attributes of the passed Hitbox_Circle
void printHitboxCircle(const Hitbox_Circle& hb)
{
	cout << "ID: " << hb.ID << endl;
	cout << "Offsets: < " << hb.x_off << ", " << hb.y_off << ", " << hb.z_off << " >" << endl;
	cout << "Radius: " << hb.rad << endl;
	cout << "Damage: " << hb.damage << endl;
	cout << "Base Knockback: " << hb.bkb << endl;
	cout << "Knockback Scaling: " << hb.kbs << endl;
	cout << "Angle: " << hb.angle << endl;
}

//Pushes the passed Hitbox_Circle 
Hitbox_Circle hitbox_listFIFO(const list<Hitbox_Circle>& hitbox_list)
{

}

Hitbox_Circle hitbox_listLIFO(const list<Hitbox_Circle>& hitbox_list)
{

}

int hitbox_listInsertAndFind(const list<Hitbox_Circle>& hitbox_list, const int& hb_ID, const shared_ptr<Hitbox_Circle>& hb_ptr)
{

}

int main()
{
	//Initialize the list
	list<Hitbox_Circle> hitbox_list;

	return 0;
}