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

		int get_Room_up() const;
		int get_Room_left() const;
		int get_Room_right() const;
		int get_Room_down() const;

		void set_Room_up(const Room& room);
		void set_Room_left(const Room& room);
		void set_Room_right(const Room& room);
		void set_Room_down(const Room& room);

		int get_id() const;
};

#endif