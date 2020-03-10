//Hazard.hpp
//Justyn Durnford
//Created on 3/3/2020
//Last updated on 3/8/2020

#ifndef HAZARD_HPP
#define HAZARD_HPP

#include "Player.hpp"

class Hazard
{
	int _room = -1;

	/* HAZARD TYPES:
	   -1: Uninitialized
	    0: Bird
		1: Bottomless Pit
	*/
	int _type = -1;

	public:

		Hazard();

		Hazard(int room, int type);

		~Hazard();

		int getRoom() const;

		int getType() const;

		void setType(int type);

		void actOnPlayer(Player& player);
};

#endif //HAZARD_HPP
