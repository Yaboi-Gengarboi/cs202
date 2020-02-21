//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last Updated on 2/20/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"

#include <memory>
using std::shared_ptr;
using std::make_shared;

Room::Room(int id, const char* short_desc, const char* long_desc)
{
	_id = id;

	_up = nullptr;
	_left = nullptr;
	_right = nullptr;
	_down = nullptr;

	_short_desc = short_desc;
	_long_desc = long_desc;

	_has_visited = false;
}

Room::~Room() {/* Destructor */}

shared_ptr<Room> Room::get_Room_up() const
{
	return _up;
}

shared_ptr<Room> Room::get_Room_left() const
{
	return _left;
}

shared_ptr<Room> Room::get_Room_right() const
{
	return _right;
}

shared_ptr<Room> Room::get_Room_down() const
{
	return _down;
}

void Room::set_Room_up(Room& room)
{
	_up = make_shared<Room>(room);
}

void Room::set_Room_left(Room& room)
{
	_left = make_shared<Room>(room);
}

void Room::set_Room_right(Room& room)
{
	_right = make_shared<Room>(room);
}

void Room::set_Room_down(Room& room)
{
	_down = make_shared<Room>(room);
}

bool Room::get_has_visited() const
{
	return _has_visited;
}

void Room::set_has_visited(bool has_visited)
{
	_has_visited = has_visited;
}

int Room::get_id() const
{
	return _id;
}

const char* Room::get_short_desc() const
{
	return _short_desc;
}

const char* Room::get_long_desc() const
{
	return _long_desc;
}