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

void printHitboxCircle(const Hitbox_Circle& hb)
{
	cout << "Offsets: < " << hb.x_off << ", " << hb.y_off << ", " << hb.z_off << " >" << endl;
	cout << "Radius: " << hb.rad << endl;
	cout << "Damage: " << hb.damage << endl;
	cout << "Base Knockback: " << hb.bkb << endl;
	cout << "Knockback Scaling: " << hb.kbs << endl;
	cout << "Angle: " << hb.angle << endl;
}

int main()
{
	Hitbox_Circle hb{ 0, 0, 0, 10, 8.0, 40, 120, 50 };
	printHitboxCircle(hb);
	return 0;
}