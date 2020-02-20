//Room.hpp
//Justyn Durnford
//Created on 2/20/2020
//Last Updated on 2/20/2020
//

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

	bool has_visited;

	public:

		Room();
		Room(int id, const char* short_desc, const char* long_desc);
		
		~Room();

		void set_Room_up(const std::shared_ptr<Room>& room);
		void set_Room_left(const std::shared_ptr<Room>& room);
		void set_Room_right(const std::shared_ptr<Room>& room);
		void set_Room_down(const std::shared_ptr<Room>& room);

		void set_has_visited();

		int get_id() const;

		const char* get_short_desc();
		const char* get_long_desc();
};

#endif