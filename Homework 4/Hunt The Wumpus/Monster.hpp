//Monster.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last Updated on 2/25/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "Room.hpp"

#include <memory>

class Monster
{
	const char* _name = nullptr;

	int _health;

	std::shared_ptr<Room> _current_room = nullptr;

	public:

		Monster();
		Monster(const char* name, int health, std::shared_ptr<Room> current_room);

		~Monster();

		const char* get_name();

		int get_health();

		void damage(int health);

		void heal(int health);

		std::shared_ptr<Room> get_current_room();

		void set_current_room(std::shared_ptr<Room>& room);



		void act();
};

#endif //MONSTER_HPP
