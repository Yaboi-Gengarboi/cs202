//Cave.cpp
//Justyn P. Durnford
//Created on 2/2/2020
//Last Updated on 2/2/2020
//

//User-created headers
#include "Cave.hpp"

//Standard Library
#include <string>
using std::string;
using std::size_t;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <memory>
using std::shared_ptr;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

Room::Room()
{
	ID = -1;

	visited = false;

	room_up = nullptr;
	room_down = nullptr;
	room_left = nullptr;
	room_right = nullptr;

	short_desc = "";
	long_desc = "";
}

Cave::Cave() {/* Default Constructor */}

void Cave::addRoom(const Room& room)
{
	rooms.push_back(room);
}

size_t Cave::roomCount() const
{
	return rooms.size();
}

Room Cave::getCurrentRoom() const
{
	return current_room;
}

void Cave::setCurrentRoom(const Room& room)
{
	current_room = room;
}

bool Cave::isRoomAdjacent(const Room& room) const
{
	if (current_room.room_up->ID == room.ID)
		return true;
	else if (current_room.room_down->ID == room.ID)
		return true;
	else if (current_room.room_left->ID == room.ID)
		return true;
	else if (current_room.room_right->ID == room.ID)
		return true;

	return false;
}

void Cave::move(const unsigned char& room)
{
	switch (room)
	{
		case 1:
			if (current_room.room_up != nullptr)
			{
				current_room = *(current_room.room_down);
				current_room.visited = true;
			}
			else
				cout << "There is no room that way." << endl;
			break;
		case 2:
			if (current_room.room_down != nullptr)
			{
				current_room = *(current_room.room_down);
				current_room.visited = true;
			}
			else
				cout << "There is no room that way." << endl;
			break;
		case 3:
			if (current_room.room_left != nullptr)
			{
				current_room = *(current_room.room_down);
				current_room.visited = true;
			}
			else
				cout << "There is no room that way." << endl;
			break;
		case 4:
			if (current_room.room_right != nullptr)
			{
				current_room = *(current_room.room_down);
				current_room.visited = true;
			}
			else
				cout << "There is no room that way." << endl;
			break;
		default:
			cout << "You should never see this." << endl;
			break;
	}
}

void Cave::printShortDesc(const Room& room) const
{
	cout << room.short_desc << endl;
}

void Cave::printLongDesc(const Room& room) const
{
	cout << room.long_desc << endl;
}

void Cave::display() const
{
	if (current_room.room_up != nullptr)
	{
		cout << "         #    #" << endl;
		cout << "  ########    ########" << endl;
	}
	else
	{
		cout << "  ####################" << endl;
	}
	cout << "  #                  #" << endl;

	if (current_room.room_left != nullptr && current_room.room_right != nullptr)
	{
		cout << "###                  ###" << endl;
		cout << endl;
		cout << "###                  ###" << endl;
	}
	else if (current_room.room_left == nullptr && current_room.room_right != nullptr)
	{
		cout << "  #                  ###" << endl;
		cout << "  #                     " << endl;
		cout << "  #                  ###" << endl;
	}
	else if (current_room.room_left != nullptr && current_room.room_right == nullptr)
	{
		cout << "###                  #  " << endl;
		cout << "                     #  " << endl;
		cout << "###                  #  " << endl;
	}
	else
	{
		cout << "  #                  #  " << endl;
		cout << "  #                  #  " << endl;
		cout << "  #                  #  " << endl;
	}
	cout << "  #                  #" << endl;

	if (current_room.room_down != nullptr)
	{
		cout << "  ########    ########" << endl;
		cout << "         #    #" << endl;
	}
	else
	{
		cout << "  ####################" << endl;
	}

	cout << endl;
}