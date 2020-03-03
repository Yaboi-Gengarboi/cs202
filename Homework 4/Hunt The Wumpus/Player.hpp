//Player.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/3/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Room.hpp"

#include <memory>
#include <string>

class Player
{
	std::string _name;

	int _health;

	std::shared_ptr<Room> _current_room = nullptr;

public:

	Player();
	Player(const std::string& name, int health, const std::shared_ptr<Room>& current_room);

	~Player();

	std::string get_name() const;

	int get_health() const;

	void damage(int health);

	void heal(int health);

	std::shared_ptr<Room> get_current_room() const;

	void set_current_room(const std::shared_ptr<Room>& room);



	void act();
};

#endif //PLAYER_HPP