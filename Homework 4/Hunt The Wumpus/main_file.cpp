//main_file.cpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/7/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"
#include "Monster.hpp"
#include "Player.hpp"
#include "Hazard.hpp"
#include "Tools.hpp"

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::to_string;
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

	/*

	print_and_wait("Anyways, listen up " + player_name + ".", 2, 2);

	print_and_wait("In the dark forest, there exists a monster that is\n"
				   "so immensely hideous, frightening and smelly that no\n"
				   "one has entered the forest and lived to tell the tale."
					, 2, 10);

	print_and_wait("They call it the Wumpus.", 2, 3);

	print_and_wait("Our village is forever bathed in the shadow of fear\n"
				   "cast by the Wumpus. Without the natural resources\n"
                   "we are constantly on the brisk of death, our fate\n"
				   "in the hands of luck. Most times, there is blood on\n"
				   "those hands. But perhaps not today."
	 , 2, 12);

	print_and_wait("You have proven yourself to be a great warrior only\n"
				   "comparable to legends. Accounts of your deeds have\n"
				   "spread beyond mountains, valleys and rivers. You are\n"
				   "more than capable of defeating the Wumpus. You are\n"
				   "destined to!", 2, 12);

	print_and_wait("There are still some things you must be wary of.", 2, 3);

	print_and_wait("The forest has bottomless pits that will drag you\n"
				   "to the middle of the Earth. If you feel a breeze,\n"
				   "be careful. One is nearby.", 2, 10);

	print_and_wait("The forest is also popular for birds. Some are so\n"
				   "large they can pick you up! They will bring you to\n"
				   "another part of the forest. If you hear a flapping\n"
				   "sound, be cautious of a bird lurking.", 2, 12);

	print_and_wait("Finally, there is the Wumpus.", 2, 3);

	print_and_wait("You cannot fight it directly. It will easily\n"
				   "overpower you. Instead, you must shoot it from a\n"
				   "distance. You can tell it is nearby from its smell.\n"
				   "Be careful when shooting, as missing will cause it to\n"
				   "approach you.", 2, 12);

	print_and_wait("It is a difficult task, but I know you are capable.", 2, 3);

	print_and_wait("You are our only hope.", 2, 5);

	print_and_wait(player_name + " has embarked on an adventure to slay\n"
				   "the Wumpus! Will they be victorious?", 2, 5);

	*/

	/*                  END INTRODUCTION                  */
	/*                  BEGIN MAIN GAME                   */

	Player player(player_name, 100, 0);
	Monster wumpus(100, 18);
	vector<Hazard> hazards;

	int r = rand_int_between(4, 16);

	int rand_ints[3] = { r, r, r };
	while (rand_ints[1] == rand_ints[0])
		rand_ints[1] = rand_int_between(4, 16);
	while (rand_ints[2] == rand_ints[0])
		rand_ints[2] = rand_int_between(4, 16);

	hazards.push_back(Hazard(rand_ints[0], 0));
	hazards.push_back(Hazard(rand_ints[1], 0));
	hazards.push_back(Hazard(rand_ints[2], 1));

	//If either the player's or monster's health is at 0, the game will end.
	//while (player.getHealth() * wumpus.getHealth() != 0)
	//{
	print_Room(player.getCurrentRoom());

	if (hazards[0].getRoom() == rooms[player.getCurrentRoom()].getRoomUp())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);
	else if (hazards[0].getRoom() == rooms[player.getCurrentRoom()].getRoomLeft())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);
	else if (hazards[0].getRoom() == rooms[player.getCurrentRoom()].getRoomRight())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);
	else if (hazards[0].getRoom() == rooms[player.getCurrentRoom()].getRoomDown())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);

	if (hazards[1].getRoom() == rooms[player.getCurrentRoom()].getRoomUp())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);
	else if (hazards[1].getRoom() == rooms[player.getCurrentRoom()].getRoomLeft())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);
	else if (hazards[1].getRoom() == rooms[player.getCurrentRoom()].getRoomRight())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);
	else if (hazards[1].getRoom() == rooms[player.getCurrentRoom()].getRoomDown())
		print_and_wait(player_name + " hears a flapping sound!", 2, 2);

	if (hazards[2].getRoom() == rooms[player.getCurrentRoom()].getRoomUp())
		print_and_wait(player_name + " feels a breeze!", 2, 2);
	else if (hazards[2].getRoom() == rooms[player.getCurrentRoom()].getRoomLeft())
		print_and_wait(player_name + " feels a breeze!", 2, 2);
	else if (hazards[2].getRoom() == rooms[player.getCurrentRoom()].getRoomRight())
		print_and_wait(player_name + " feels a breeze!", 2, 2);
	else if (hazards[2].getRoom() == rooms[player.getCurrentRoom()].getRoomDown())
		print_and_wait(player_name + " feels a breeze!", 2, 2);

	if (wumpus.getCurrentRoom() == rooms[player.getCurrentRoom()].getRoomUp())
		print_and_wait(player_name + " smells a wumpus!", 2, 2);
	else if (wumpus.getCurrentRoom() == rooms[player.getCurrentRoom()].getRoomLeft())
		print_and_wait(player_name + " smells a wumpus!", 2, 2);
	else if (wumpus.getCurrentRoom() == rooms[player.getCurrentRoom()].getRoomRight())
		print_and_wait(player_name + " smells a wumpus!", 2, 2);
	else if (wumpus.getCurrentRoom() == rooms[player.getCurrentRoom()].getRoomDown())
		print_and_wait(player_name + " smells a wumpus!", 2, 2);

	vector<string> choices = { "Move", "Shoot" };
	
	int choice = get_choice("What will" + player_name + " do?", choices);

	if (choice == 0)
	{
		choices.clear();
		choices = { "Up", "Left", "Right", "Down" };

		choice = get_choice("Where will" + player_name + " move?", choices);

		switch (choice)
		{
			case 0:
				if (rooms[player.getCurrentRoom()].getRoomUp() != -1)
				{
					print_and_wait(player_name + " moved up!", 2, 2);
					player.setCurrentRoom(rooms[player.getCurrentRoom()].getRoomUp());
				}
				else if (rooms[player.getCurrentRoom()].getRoomUp() == -1)
					print_and_wait(player_name + " can't move up!", 2, 2);
				break;

			case 1:
				if (rooms[player.getCurrentRoom()].getRoomLeft() != -1)
				{
					print_and_wait(player_name + " moved left!", 2, 2);
					player.setCurrentRoom(rooms[player.getCurrentRoom()].getRoomLeft());
				}
				else if (rooms[player.getCurrentRoom()].getRoomLeft() == -1)
					print_and_wait(player_name + " can't move left!", 2, 2);

			case 2:
				if (rooms[player.getCurrentRoom()].getRoomRight() != -1)
				{
					print_and_wait(player_name + " moved right!", 2, 2);
					player.setCurrentRoom(rooms[player.getCurrentRoom()].getRoomRight());
				}
				else if (rooms[player.getCurrentRoom()].getRoomRight() == -1)
					print_and_wait(player_name + " can't move right!", 2, 2);

			case 3:
				if (rooms[player.getCurrentRoom()].getRoomDown() != -1)
				{
					print_and_wait(player_name + " moved down!", 2, 2);
					player.setCurrentRoom(rooms[player.getCurrentRoom()].getRoomDown());
				}
				else if (rooms[player.getCurrentRoom()].getRoomDown() == -1)
					print_and_wait(player_name + " can't move down!", 2, 2);
		}

		if (player.getCurrentRoom() == hazards[0].getRoom())
		{
			hazards[0].actOnPlayer(player);
			print_and_wait("A bird caught " + player_name + " and took them to room " + to_string(player.getCurrentRoom()), 2, 4);
		}
		else if (player.getCurrentRoom() == hazards[1].getRoom())
		{
			hazards[1].actOnPlayer(player);
			print_and_wait("A bird caught " + player_name + " and took them to room " + to_string(player.getCurrentRoom()), 2, 4);
		}
		else if (player.getCurrentRoom() == hazards[2].getRoom())
		{
			hazards[2].actOnPlayer(player);
			print_and_wait(player_name + " fell in a bottomless pit!", 2, 2);
			print_and_wait("GAME OVER", 2, 3);
			return 0;
		}
		else if (player.getCurrentRoom() == wumpus.getCurrentRoom())
		{
			wumpus.actOnPlayer(player);
			print_and_wait(player_name + " was eaten by the wumpus!", 2, 2);
			print_and_wait("GAME OVER", 2, 3);
			return 0;
		}
	}
	//}

	return 0;
}