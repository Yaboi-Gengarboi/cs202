//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/8/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"
#include "Monster.hpp"
#include "Hazard.hpp"

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

bool Room::isMonsterUp(const Monster& monster) const
{
	if (monster.getCurrentRoom() == _up)
		return true;
	return false;
}

bool Room::isMonsterLeft(const Monster& monster) const
{
	if (monster.getCurrentRoom() == _left)
		return true;
	return false;
}

bool Room::isMonsterRight(const Monster& monster) const
{
	if (monster.getCurrentRoom() == _right)
		return true;
	return false;
}

bool Room::isMonsterDown(const Monster& monster) const
{
	if (monster.getCurrentRoom() == _down)
		return true;
	return false;
}

bool Room::isHazardUp(const Hazard& hazard) const
{
	if (hazard.getRoom() == _up)
		return true;
	return false;
}

bool Room::isHazardLeft(const Hazard& hazard) const
{
	if (hazard.getRoom() == _left)
		return true;
	return false;
}

bool Room::isHazardRight(const Hazard& hazard) const
{
	if (hazard.getRoom() == _right)
		return true;
	return false;
}

bool Room::isHazardDown(const Hazard& hazard) const
{
	if (hazard.getRoom() == _down)
		return true;
	return false;
}