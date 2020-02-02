//Hitbox_Circle.hpp
//Justyn P. Durnford
//Created on 1/30/2020
//Last Updated on 1/30/2020
//

#ifndef HITBOX_CIRCLE_HPP
#define HITBOX_CIRCLE_HPP

#include <memory>

struct Hitbox_Circle
{
	//Hitbox ID
	int ID = 0;

	//Offsets of Hitbox origin
	int x_off = 0;
	int y_off = 0;
	int z_off = 0;

	//Radius of Hitbox
	int rad = 0;

	//Damage
	double damage = 0.0;

	//Base Knockback
	int bkb = 0;

	//Knockback Scaling
	int kbs = 0;

	//Angle (In Degrees)
	double angle = 0.0;

	//Next Hitbox_Circle
	std::shared_ptr<Hitbox_Circle> next;
};

//Compares the hitboxes to see iif they are equal.
//Returns true if they are.
bool operator == (const Hitbox_Circle& hb1, const Hitbox_Circle& hb2);

#endif //#ifndef HITBOX_CIRCLE_HPP