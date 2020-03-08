//Player.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/7/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Room.hpp"

#include <string>

class Player
{
	std::string _name;

	int _health = 0;

	int _current_room = -1;

	public:

		Player();
		Player(const std::string& name, int health, const Room& current_room);

		~Player();

		std::string getName() const;

		int getHealth() const;

		void damage(int health);

		void heal(int health);

		int getCurrentRoom() const;

		void setCurrentRoom(const Room& room);

		bool shoot(int direction);
};

#endif //PLAYER_HPP