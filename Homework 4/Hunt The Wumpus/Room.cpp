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

int Room::get_Room_up() const
{
	return _up;
}

int Room::get_Room_left() const
{
	return _left;
}

int Room::get_Room_right() const
{
	return _right;
}

int Room::get_Room_down() const
{
	return _down;
}

void Room::set_Room_up(const Room& room)
{
	_up = room.get_id();
}

void Room::set_Room_left(const Room& room)
{
	_left = room.get_id();
}

void Room::set_Room_right(const Room& room)
{
	_right = room.get_id();
}

void Room::set_Room_down(const Room& room)
{
	_down = room.get_id();
}

int Room::get_id() const
{
	return _id;
}