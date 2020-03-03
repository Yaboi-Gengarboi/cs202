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

#include <vector>
using std::vector;

#include <random>
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

random_device rDev;
default_random_engine engine(rDev());

int rand_int_between(int low, int high)
{
	uniform_int_distribution<int> uniform_dist(low, high);
	return uniform_dist(engine);
}

bool does_file_exist(const char* file)
{
	ifstream ifile(file);

	return ifile.good();
}