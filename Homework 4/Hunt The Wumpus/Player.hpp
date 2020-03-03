//Player.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/3/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Room.hpp"

class Player
{
	const char* name = nullptr;

	int _health = 0;

	int _current_room = -1;

	public:

		Player();
		Player(const char* name, int health, const Room& current_room);

		~Player();

		const char* getName() const;

		int getHealth() const;

		void damage(int health);

		void heal(int health);

		int getCurrentRoom() const;

		void setCurrentRoom(const Room& room);



		void act();
};

#endif //PLAYER_HPP