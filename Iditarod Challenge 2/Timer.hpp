// Timer.hpp
// Justyn Durnford
// Created on 3/31/2020
// Last updated on 3/31/2020

#include <chrono>

class Timer
{
	std::chrono::time_point<std::chrono::system_clock> _start;
	std::chrono::time_point<std::chrono::system_clock> _end;
	bool _is_stopped = false;

	public:

	//Constructor
	Timer();

	//Destructor
	~Timer();

	//Sets the value of _start.
	void start();

	//Sets the value of _end.
	void stop();

	//Returns the amount of seconds that have passed.
	double secondsPassed();

	//Returns the amount of milliseconds that have passed.
	double millisecondsPassed();
};