//Hazard.hpp
//Justyn Durnford
//Created on 3/3/2020
//Last updated on 3/3/2020

#include "Hazard.hpp"
#include "Room.hpp"

Hazard::Hazard() {}

Hazard::Hazard(int room, int type)
{
	_room = room;
	_type = type;
}

Hazard::~Hazard() {}

int Hazard::getRoom()
{
	return _room;
}

int Hazard::getType()
{
	return _type;
}

void Hazard::setType(int type)
{
	_type = type;
}

void Hazard::actOnPlayer()
{

}