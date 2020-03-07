//Player.cpp
//Justyn Durnford
//Created on 3/6/2020
//Last updated on 3/7/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Player.hpp"
#include "Room.hpp"
#include "Monster.hpp"
#include "Hazard.hpp"

#include <string>
using std::string;

Player::Player() {}

Player::Player(const string& name, int health, const Room& current_room):_name(name)
{
	_name = name;
	_health = health;
	_current_room = current_room.getId();
}

Player::~Player() {}

string Player::getName() const { return _name; }

int Player::getHealth() const { return _health; }

void Player::damage(int health)
{
	_health -= health;
}

void Player::heal(int health)
{
	_health += health;
}

int Player::getCurrentRoom() const { return _current_room; }

void Player::setCurrentRoom(const Room& room)
{
	_current_room = room.getId();
}