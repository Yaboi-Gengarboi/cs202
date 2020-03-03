//main_file.cpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/3/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"
#include "Monster.hpp"
#include "Player.hpp"
#include "Tools.hpp"

#include <memory>
using std::shared_ptr;
using std::make_unique;

#include <vector>
using std::vector;

#include <string>
using std::size_t;
using std::string;
using std::to_string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	vector<Room> rooms;

	for (int i = 0; i < 20; ++i)
	{
		Room room(i);
		rooms.push_back(room);
	}

	/* _____ROOM SYSTEM VISUALIZATION_____

			             |07||12|
                 |01||04||08||13||17|
    Player -> |00|02||05||09||14||18| <- Monster
                 |03||06||10||15||19|
		                 |11||16|
	*/

	/*
	rooms[0].set_Room_right(rooms[2]);

	rooms[1].set_Room_right(rooms[4]);
	rooms[1].set_Room_down(rooms[2]);

	rooms[2].set_Room_up(rooms[1]);
	rooms[2].set_Room_left(rooms[0]);
	rooms[2].set_Room_right(rooms[5]);
	rooms[2].set_Room_down(rooms[3]);

	rooms[3].set_Room_up(rooms[2]);
	rooms[3].set_Room_right(rooms[6]);

	rooms[4].set_Room_left(rooms[1]);
	rooms[4].set_Room_right(rooms[8]);
	rooms[4].set_Room_down(rooms[5]);

	rooms[5].set_Room_up(rooms[4]);
	rooms[5].set_Room_left(rooms[2]);
	rooms[5].set_Room_right(rooms[9]);
	rooms[5].set_Room_down(rooms[6]);

	rooms[6].set_Room_up(rooms[5]);
	rooms[6].set_Room_left(rooms[5]);
	rooms[6].set_Room_right(rooms[10]);

	rooms[7].set_Room_right(rooms[12]);
	rooms[7].set_Room_down(rooms[8]);

	rooms[8].set_Room_up(rooms[7]);
	rooms[8].set_Room_left(rooms[4]);
	rooms[8].set_Room_right(rooms[13]);
	rooms[8].set_Room_down(rooms[9]);

	rooms[9].set_Room_up(rooms[8]);
	rooms[9].set_Room_left(rooms[5]);
	rooms[9].set_Room_right(rooms[14]);
	rooms[9].set_Room_down(rooms[10]);

	rooms[10].set_Room_up(rooms[9]);
	rooms[10].set_Room_left(rooms[6]);
	rooms[10].set_Room_right(rooms[15]);
	rooms[10].set_Room_down(rooms[11]);

	rooms[11].set_Room_up(rooms[10]);
	rooms[11].set_Room_right(rooms[16]);

	rooms[12].set_Room_left(rooms[7]);
	rooms[12].set_Room_down(rooms[13]);

	rooms[13].set_Room_up(rooms[12]);
	rooms[13].set_Room_left(rooms[8]);
	rooms[13].set_Room_right(rooms[17]);
	rooms[13].set_Room_down(rooms[14]);

	rooms[14].set_Room_up(rooms[13]);
	rooms[14].set_Room_left(rooms[9]);
	rooms[14].set_Room_right(rooms[18]);
	rooms[14].set_Room_down(rooms[15]);

	rooms[15].set_Room_up(rooms[14]);
	rooms[15].set_Room_left(rooms[10]);
	rooms[15].set_Room_right(rooms[19]);
	rooms[15].set_Room_down(rooms[16]);

	*/

	return 0;
}