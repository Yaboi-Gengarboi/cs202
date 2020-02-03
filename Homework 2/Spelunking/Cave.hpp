//Cave.hpp
//Justyn P. Durnford
//Created on 2/2/2020
//Last Updated on 2/2/2020
//

#ifndef CAVE_HPP
#define CAVE_HPP

#include <string>
#include <fstream>
#include <memory>
#include <vector>

struct Room
{
	//Room Identification
	std::size_t ID;

	//Has this room been visited?
	bool visited;

	//Adjacent rooms.
	std::shared_ptr<Room> room_up;
	std::shared_ptr<Room> room_down;
	std::shared_ptr<Room> room_left;
	std::shared_ptr<Room> room_right;

	//Short description of the room.
	std::string short_desc;

	//Long description of the room.
	std::string long_desc;

	//Defaults all adjacent rooms to nullptr.
	Room();

};

class Cave
{
	std::vector<Room> rooms;
	Room current_room;

	public:

		//Constructor
		Cave();

		//Adds the room to rooms.
		void addRoom(const Room& room);

		//Returns the amount of rooms in the cave.
		std::size_t roomCount() const;

		//Returns the Room the player is in.
		Room getCurrentRoom() const;

		//Sets the Room the player is in.
		void setCurrentRoom(const Room& room);

		//Returns true if the given room is adjacent to current_room.
		bool isRoomAdjacent(const Room& room) const;

		//Moves the player to the adjecent room if it exists and
		//is adjacent to the current soom.
		//1: room_up
		//2: room_down
		//3: room_left
		//4: room_right
		void move(const unsigned char& room);

		//Prints the short_desc of the given room.
		void printShortDesc(const Room& room) const;

		//Prints the long_desc of the given room.
		void printLongDesc(const Room& room) const;

		//Prints characters to the iostream effectively
		//displaying current_room.
		void display() const;

		//Saves the cave layout to the txt file.
		void saveCave() const;

		//Loads the cave layout from the txt file.
		void loadCave();
};

#endif //CAVE_HPP