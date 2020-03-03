//Hazard.hpp
//Justyn Durnford
//Created on 3/3/2020
//Last updated on 3/3/2020

#ifndef HAZARD_HPP
#define HAZARD_HPP

class Hazard
{
	int _room = -1;

	/* HAZARD TYPES:
	   -1: Uninitialized
	    0: Bat
		1: Bottomless Pit
	*/
	int _type = -1;

	public:

		Hazard();

		Hazard(int room, int type);

		~Hazard();

		int get_room();

		int get_type();

		void set_type(int type);

		void act_on_player();
};

#endif //HAZARD_HPP
