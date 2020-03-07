//main_file.cpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/7/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"
#include "Monster.hpp"
#include "Player.hpp"
#include "Tools.hpp"

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::getline;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	/*         BEGIN ROOM SEQUENCE INITIALIZATION         */

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

	/*          END ROOM SEQUENCE INITIALIZATION          */
	/*                 BEGIN INTRODUCTION                 */

	string player_name;

	cout << "What's your name?" << endl;
	getline(cin, player_name);
	print_and_wait(player_name + ". I have heard much about you.", 2, 2);

	print_and_wait("Anyways, listen up " + player_name + ".", 2, 2);

	print_and_wait("In the dark forest, there exists a monster that is"
				   "so immensely hideous, frightening and smelly that no"
				   "one has entered the forest and lived to tell the tale."
					, 2, 10);

	print_and_wait("They call it the Wumpus.", 2, 3);

	print_and_wait("Our village is forever bathed in the shadow of fear"
				   "cast by the Wumpus. Without the natural resources"
                   "we are constantly on the brisk of death, our fate"
				   "in the hands of luck. Most times, there is blood on"
				   "those hands. But perhaps not today."
	 , 2, 12);

	print_and_wait("You have proven yourself to be a great warrior only"
				   "comparable to legends. Accounts of your deeds have"
				   "spread beyond mountains, valleys and rivers. You are"
				   "more than capable of defeating the Wumpus. You are"
				   "destined to!", 2, 12);

	print_and_wait("There are still some things you must be wary of.", 2, 3);

	print_and_wait("The forest has bottomless pits that will drag you"
				   "to the middle of the Earth. If you feel a breeze,"
				   "be careful. One is nearby.", 2, 10);

	print_and_wait("The forest is also popular for birds. Some are so"
				   "large they can pick you up! They will bring you to"
				   "another part of the forest. If you hear a flapping"
				   "sound, be cautious of a bird lurking.", 2, 12);

	print_and_wait("Finally, there is the Wumpus.", 2, 3);

	print_and_wait("You cannot fight it directly. It will easily"
				   "overpower you. Instead, you must shoot it from a"
				   "distance. You can tell it is nearby from its smell."
				   "Be careful when shooting, as missing will cause it to"
				   "approach you.", 2, 12);

	print_and_wait("It is a difficult task, but I know you are capable.", 2, 3);

	print_and_wait("You are our only hope.", 2, 5);

	print_and_wait(player_name + " has embarked on an adventure to slay"
				   "the Wumpus! Will they be victorious?", 2, 5);

	/*                  END INTRODUCTION                  */

	/*                  BEGIN MAIN GAME                   */

	Player pl(player_name, 100, 0);
	Monster wump(100, 18);

	//If either the player's or monster's health is at 0, the game will end.
	while (pl.getHealth() * wump.getHealth() != 0)
	{

	}

	return 0;
}