//main_file.cpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/3/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"
#include "Monster.hpp"
#include "Player.hpp"
#include "Tools.hpp"

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	//Initialize Rooms
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

	rooms[0].setRoomRight(rooms[2]);

	rooms[1].setRoomRight(rooms[4]);
	rooms[1].setRoomDown(rooms[2]);

	rooms[2].setRoomUp(rooms[1]);
	rooms[2].setRoomLeft(rooms[0]);
	rooms[2].setRoomRight(rooms[5]);
	rooms[2].setRoomDown(rooms[3]);

	rooms[3].setRoomUp(rooms[2]);
	rooms[3].setRoomRight(rooms[6]);

	rooms[4].setRoomLeft(rooms[1]);
	rooms[4].setRoomRight(rooms[8]);
	rooms[4].setRoomDown(rooms[5]);

	rooms[5].setRoomUp(rooms[4]);
	rooms[5].setRoomLeft(rooms[2]);
	rooms[5].setRoomRight(rooms[9]);
	rooms[5].setRoomDown(rooms[6]);

	rooms[6].setRoomUp(rooms[5]);
	rooms[6].setRoomLeft(rooms[5]);
	rooms[6].setRoomRight(rooms[10]);

	rooms[7].setRoomRight(rooms[12]);
	rooms[7].setRoomDown(rooms[8]);

	rooms[8].setRoomUp(rooms[7]);
	rooms[8].setRoomLeft(rooms[4]);
	rooms[8].setRoomRight(rooms[13]);
	rooms[8].setRoomDown(rooms[9]);

	rooms[9].setRoomUp(rooms[8]);
	rooms[9].setRoomLeft(rooms[5]);
	rooms[9].setRoomRight(rooms[14]);
	rooms[9].setRoomDown(rooms[10]);

	rooms[10].setRoomUp(rooms[9]);
	rooms[10].setRoomLeft(rooms[6]);
	rooms[10].setRoomRight(rooms[15]);
	rooms[10].setRoomDown(rooms[11]);

	rooms[11].setRoomUp(rooms[10]);
	rooms[11].setRoomRight(rooms[16]);

	rooms[12].setRoomLeft(rooms[7]);
	rooms[12].setRoomDown(rooms[13]);

	rooms[13].setRoomUp(rooms[12]);
	rooms[13].setRoomLeft(rooms[8]);
	rooms[13].setRoomRight(rooms[17]);
	rooms[13].setRoomDown(rooms[14]);

	rooms[14].setRoomUp(rooms[13]);
	rooms[14].setRoomLeft(rooms[9]);
	rooms[14].setRoomRight(rooms[18]);
	rooms[14].setRoomDown(rooms[15]);

	rooms[15].setRoomUp(rooms[14]);
	rooms[15].setRoomLeft(rooms[10]);
	rooms[15].setRoomRight(rooms[19]);
	rooms[15].setRoomDown(rooms[16]);

	rooms[16].setRoomUp(rooms[15]);
	rooms[16].setRoomLeft(rooms[11]);

	rooms[17].setRoomLeft(rooms[13]);
	rooms[17].setRoomDown(rooms[18]);

	rooms[18].setRoomUp(rooms[17]);
	rooms[18].setRoomLeft(rooms[14]);
	rooms[18].setRoomDown(rooms[19]);

	rooms[19].setRoomUp(rooms[18]);
	rooms[19].setRoomLeft(rooms[15]);

	return 0;
}