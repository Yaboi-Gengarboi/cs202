#include "Cave.hpp"

#include <memory>
using std::shared_ptr;
using std::make_shared;

int main()
{
	Room r0;
	Room r1;
	Room r2;
	Room r3;
	Room r4;
	Room r5;

	r0.ID = 0;
	r1.ID = 1;
	r2.ID = 2;
	r3.ID = 3;
	r4.ID = 4;
	r5.ID = 5;

	r0.room_right = make_shared<Room>(r1);

	r1.room_up = make_shared<Room>(r2);
	r1.room_down = make_shared<Room>(r4);
	r1.room_left = make_shared<Room>(r0);
	r1.room_right = make_shared<Room>(r3);

	r2.room_down = make_shared<Room>(r1);

	r3.room_left = make_shared<Room>(r1);

	r4.room_up = make_shared<Room>(r1);

	Cave c;
	c.addRoom(r0);
	c.addRoom(r1);
	c.addRoom(r2);
	c.addRoom(r3);
	c.addRoom(r4);
	c.addRoom(r5);

	c.setCurrentRoom(r0);
	c.display();

	c.setCurrentRoom(r1);
	c.display();

	c.setCurrentRoom(r2);
	c.display();

	c.setCurrentRoom(r3);
	c.display();

	c.setCurrentRoom(r4);
	c.display();

	c.setCurrentRoom(r5);
	c.display();

	return 0;
}