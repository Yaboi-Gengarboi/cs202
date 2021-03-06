//StopWatch.hpp
//Justyn P. Durnford
//Created on 1/25/2020
//Last Updated on 1/25/2020
//

#include <chrono>

class StopWatch
{
	std::chrono::time_point<std::chrono::system_clock> _start;
	std::chrono::time_point<std::chrono::system_clock> _end;
	bool _is_stopped = false;

	public:

		//Constructor
		StopWatch();

		//Destructor
		~StopWatch();

		//Sets the value of _start.
		void start();
		
		//Sets the value of _end.
		void stop();

		//Returns the amount of seconds that have passed.
		double seconds_passed();

		//Returns the amount of seconds that have passed.
		double milliseconds_passed();
};