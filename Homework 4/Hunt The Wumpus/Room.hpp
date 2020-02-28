//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 2/25/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef ROOM_HPP
#define ROOM_HPP

#include <memory>
#include <string>

class Room
{
	//Serves as a form of identification for the room.
	int _id;

	//Shared pointers to adjacent rooms, if they exist.
	std::shared_ptr<Room> _up = nullptr;
	std::shared_ptr<Room> _left = nullptr;
	std::shared_ptr<Room> _right = nullptr;
	std::shared_ptr<Room> _down = nullptr;

	//Description of the room.
	std::string _desc;

	//Keeps track of whether or not the player has
	//visited the room.
	bool _has_visited;

	public:

		Room(int id, std::string desc);
		
		~Room();

		std::shared_ptr<Room> get_Room_up() const;
		std::shared_ptr<Room> get_Room_left() const;
		std::shared_ptr<Room> get_Room_right() const;
		std::shared_ptr<Room> get_Room_down() const;

		void set_Room_up(const Room& room);
		void set_Room_left(const Room& room);
		void set_Room_right(const Room& room);
		void set_Room_down(const Room& room);

		bool get_has_visited() const;
		void set_has_visited(bool has_visited);

		int get_id() const;

		std::string get_desc() const;
};

#endif