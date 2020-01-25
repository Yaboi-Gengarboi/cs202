//stopwatch_test.cpp
//Justyn P. Durnford
//Created on 1/25/2020
//Last Updated on 1/25/2020
//

#include <iostream>
using std::cout;
using std::endl;

#include <chrono>
using std::chrono::time_point;
using std::chrono::system_clock;
using std::chrono::duration;
using std::chrono::seconds;
using std::chrono::microseconds;
using std::chrono::milliseconds;
using std::chrono::hours;
using std::chrono::minutes;
using std::chrono::nanoseconds;

time_point<system_clock> time()
{
	return system_clock::now();
}

int main()
{
	time_point<system_clock> start, end;

	start = system_clock::now();
	end = system_clock::now();

	duration<double> time_elapsed = end - start;
	duration<double> second = seconds{ 1 };

	cout << time_elapsed.count() << endl;
	cout << second.count() << endl;

	return 0;
}