//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/3/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"

Room::Room() {}

Room::Room(int id)
{
	_id = id;
}

Room::~Room() {/* Destructor */}

int Room::getRoomUp() const
{
	return _up;
}

int Room::getRoomLeft() const
{
	return _left;
}

int Room::getRoomRight() const
{
	return _right;
}

int Room::getRoomDown() const
{
	return _down;
}

void Room::setRoomUp(const Room& room)
{
	_up = room.getId();
}

void Room::setRoomLeft(const Room& room)
{
	_left = room.getId();
}

void Room::setRoomRight(const Room& room)
{
	_right = room.getId();
}

void Room::setRoomDown(const Room& room)
{
	_down = room.getId();
}

int Room::getId() const
{
	return _id;
}