// Timer.cpp
// Justyn Durnford
// Created on 3/31/2020
// Last updated on 3/31/2020

#include "Timer.hpp"
// <chrono>
using std::chrono::time_point;
using std::chrono::system_clock;
using std::chrono::duration;

Timer::Timer()
{
	_start = system_clock::now();
}

Timer::~Timer() { /* Destructor */ }

void Timer::start()
{
	_start = system_clock::now();
	_is_stopped = false;
}

void Timer::stop()
{
	_end = system_clock::now();
	_is_stopped = true;
}

double Timer::secondsPassed()
{
	duration<double> time_elapsed;

	if (_is_stopped)
		time_elapsed = _end - _start;

	else
		time_elapsed = system_clock::now() - _start;

	return time_elapsed.count();
}

double Timer::millisecondsPassed()
{
	duration<double> time_elapsed;

	if (_is_stopped)
		time_elapsed = _end - _start;

	else
		time_elapsed = system_clock::now() - _start;

	return time_elapsed.count() * 1000;
}