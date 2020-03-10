//Hazard.hpp
//Justyn Durnford
//Created on 3/3/2020
//Last updated on 3/8/2020

#include "Hazard.hpp"
#include "Room.hpp"
#include "Tools.hpp"

Hazard::Hazard() {}

Hazard::Hazard(int room, int type)
{
	_room = room;
	_type = type;
}

Hazard::~Hazard() {}

int Hazard::getRoom() const
{
	return _room;
}

int Hazard::getType() const
{
	return _type;
}

void Hazard::setType(int type)
{
	_type = type;
}

void Hazard::actOnPlayer(Player& player)
{
	if (_type == 0)
	{
		player.setCurrentRoom(rand_int_between(0, 19));
	}
	else if (_type == 1)
	{
		player.damage(100);
	}
}