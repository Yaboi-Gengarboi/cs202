//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 2/25/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"

#include <memory>
using std::shared_ptr;
using std::make_shared;

#include <string>
using std::string;

Room::Room(int id, string desc)
{
	_id = id;

	_up = nullptr;
	_left = nullptr;
	_right = nullptr;
	_down = nullptr;

	_desc = desc;

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

void Room::set_Room_up(const Room& room)
{
	_up = make_shared<Room>(room);
}

void Room::set_Room_left(const Room& room)
{
	_left = make_shared<Room>(room);
}

void Room::set_Room_right(const Room& room)
{
	_right = make_shared<Room>(room);
}

void Room::set_Room_down(const Room& room)
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

string Room::get_desc() const
{
	return _desc;
}