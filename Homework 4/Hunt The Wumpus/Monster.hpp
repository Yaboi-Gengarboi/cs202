//Monster.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/3/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "Room.hpp"

class Monster
{
	const char* name = "Wumpus";

	int _health = -1;

	int _current_room = -1;

	public:

		Monster();
		Monster(int health, const Room& current_room);

		~Monster();

		const char* getName() const;

		int getHealth() const;

		void damage(int health);

		void heal(int health);

		int getCurrentRoom() const;

		void setCurrentRoom(const Room& room);



		void act();
};

#endif //MONSTER_HPP
