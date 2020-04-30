// Jtimer.cpp
// Justyn Durnford
// Created on 4/2/2020
// Last updated on 4/29/2020

#include "Jtimer.hpp"

// #include <string>
using std::string;
using std::to_string;

// #include <chrono>
using std::chrono::time_point;
using std::chrono::system_clock;
using std::chrono::duration;

Jtimer::Jtimer()
{
	_start = system_clock::now();
}

Jtimer::~Jtimer() { /* Destructor */ }

void Jtimer::start()
{
	_start = system_clock::now();
	_is_stopped = false;
}

void Jtimer::stop()
{
	_end = system_clock::now();
	_is_stopped = true;
}

double Jtimer::secondsPassed() const
{
	duration<double> time_elapsed;

	if (_is_stopped)
		time_elapsed = _end - _start;

	else
		time_elapsed = system_clock::now() - _start;

	return time_elapsed.count();
}

double Jtimer::millisecondsPassed() const
{
	duration<double> time_elapsed;

	if (_is_stopped)
		time_elapsed = _end - _start;

	else
		time_elapsed = system_clock::now() - _start;

	return time_elapsed.count() * 1000;
}

string Jtimer::toString() const
{
	string str = "";

	double time = secondsPassed();
	if (time >= 1)
	{
		str += "Seconds passed: ";
		str += to_string(time);
	}
	else
	{
		str += "Milliseconds passed: ";
		str += to_string(time * 1000);
	}

	return str;
}