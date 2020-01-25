//StopWatch.hpp
//Justyn P. Durnford
//Created on 1/25/2020
//Last Updated on 1/25/2020
//

#include <chrono>

class StopWatch
{
	std::chrono::time_point<std::chrono::system_clock> _start;
	std::chrono::time_point<std::chrono::system_clock> _endl;

	public:

		//Constructors
		StopWatch();

		void start();
		
		void stop();

		double seconds_passed();

		double milliseconds_passed();
};