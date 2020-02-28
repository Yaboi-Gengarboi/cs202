//Tools.cpp
//Justyn Durnford
//Created on 2/27/2020
//Last updated on 2/27/2020
//Contains functions and information of general use
//to be used in other files.
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Tools.hpp"

#include <fstream>
using std::ifstream;

unsigned int xor128()
{
	static unsigned int x = 123456789;
	static unsigned int y = 362436069;
	static unsigned int z = 521288629;
	static unsigned int w = 88675123;

	unsigned int t = 0;

	t = x ^ (x << 11);
	x = y;
	y = z;
	z = w;

	w = w ^ (w >> 19) ^ (t ^ (t >> 8));
	return w;
}

unsigned int rand_int_between(int low, int high)
{
	return xor128() % high + low;
}

bool does_file_exist(const char* file)
{
	ifstream ifile(file);

	return ifile.good();
}