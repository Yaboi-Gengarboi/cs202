//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last Updated on 2/20/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef ROOM_HPP
#define ROOM_HPP

#include <memory>

class Room
{
	int _id;

	std::shared_ptr<Room> _up;
	std::shared_ptr<Room> _left;
	std::shared_ptr<Room> _right;
	std::shared_ptr<Room> _down;

	const char* _short_desc;
	const char* _long_desc;

	bool _has_visited;

	public:

		Room(int id, const char* short_desc, const char* long_desc);
		
		~Room();

		std::shared_ptr<Room> get_Room_up() const;
		std::shared_ptr<Room> get_Room_left() const;
		std::shared_ptr<Room> get_Room_right() const;
		std::shared_ptr<Room> get_Room_down() const;

		void set_Room_up(const std::shared_ptr<Room>& room);
		void set_Room_left(const std::shared_ptr<Room>& room);
		void set_Room_right(const std::shared_ptr<Room>& room);
		void set_Room_down(const std::shared_ptr<Room>& room);

		bool get_has_visited() const;
		void set_has_visited();

		int get_id() const;

		const char* get_short_desc() const;
		const char* get_long_desc() const;
};

#endif