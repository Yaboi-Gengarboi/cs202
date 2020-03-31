// StopWatch.cpp
// Justyn Durnford
// Created on 3/31/2020
// Last updated on 3/31/2020

#include "StopWatch.hpp"
// <chrono>
using std::chrono::time_point;
using std::chrono::system_clock;
using std::chrono::duration;

StopWatch::StopWatch()
{
	_start = system_clock::now();
}

StopWatch::~StopWatch() { /* Destructor */ }

void StopWatch::start()
{
	_start = system_clock::now();
	_is_stopped = false;
}

void StopWatch::stop()
{
	_end = system_clock::now();
	_is_stopped = true;
}

double StopWatch::seconds_passed()
{
	duration<double> time_elapsed;

	if (_is_stopped)
		time_elapsed = _end - _start;

	else
		time_elapsed = system_clock::now() - _start;

	return time_elapsed.count();
}

double StopWatch::milliseconds_passed()
{
	duration<double> time_elapsed;

	if (_is_stopped)
		time_elapsed = _end - _start;

	else
		time_elapsed = system_clock::now() - _start;

	return time_elapsed.count() * 1000;
}