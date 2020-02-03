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
	std::size_t room_ID;

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
	std::size_t current_room;

	public:

		//Returns the amount of rooms in the cave.
		std::size_t roomCount() const;

		//Returns the Room the player is in.
		Room getCurrentRoom() const;

		//Moves the player to the given room if it exists and
		//is adjacent to the current soom. Normally a 
		//non-adjacent room cannot be accessed, but if
		//bool ignoreAdjacent is true, it will be allowed.
		void moveToRome(const std::size_t& room, const bool& ignoreAdjacent);

		//Prints the short_desc of the given room.
		void printShortDesc(const std::size_t& room) const;

		//Prints the long_desc of the given room.
		void printLongDesc(int room) const;

		//Saves the cave layout to the txt file.
		void saveCave() const;

		//Loads the cave layout from the txt file.
		void loadCave() const;
};

#endif //CAVE_HPP