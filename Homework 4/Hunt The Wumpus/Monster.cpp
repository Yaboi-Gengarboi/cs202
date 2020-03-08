//Monster.cpp
//Justyn Durnford
//Created on 3/7/2020
//Last updated on 3/7/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Monster.hpp"
#include "Room.hpp"
#include "Player.hpp"
#include "Hazard.hpp"

#include <string>
using std::string;

Monster::Monster() {}

Monster::Monster(int health, const Room& current_room)
{
	_health = health;
	_current_room = current_room.getId();
}

Monster::~Monster() {}

string Monster::getName() const { return _name; }

int Monster::getHealth() const { return _health; }

void Monster::damage(int health)
{ 
	_health -= health; 
}

void Monster::heal(int health)
{
	_health += health; 
}

int Monster::getCurrentRoom() const { return _current_room; }

void Monster::setCurrentRoom(const Room& room)
{
	_current_room = room.getId();
}

void Monster::actOnPlayer(Player& player)
{
	player.damage(100);
}