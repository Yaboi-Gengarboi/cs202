//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 3/3/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef ROOM_HPP
#define ROOM_HPP

class Room
{
	//Serves as a form of identification for the room.
	int _id = -1;

	//IDs of adjacent rooms. An ID of -1 indicates
	//there is no adjacent room in that direction.
	char _up = -1;
	char _left = -1;
	char _right = -1;
	char _down = -1;

	public:

		Room();

		Room(int id);
		
		~Room();

		int getRoomUp() const;
		int getRoomLeft() const;
		int getRoomRight() const;
		int getRoomDown() const;

		void setRoomUp(const Room& room);
		void setRoomLeft(const Room& room);
		void setRoomRight(const Room& room);
		void setRoomDown(const Room& room);

		int getId() const;
};

#endif