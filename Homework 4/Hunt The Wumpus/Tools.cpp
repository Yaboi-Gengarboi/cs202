//Tools.cpp
//Justyn Durnford
//Created on 2/27/2020
//Last updated on 3/6/2020
//Contains functions and information of general use
//to be used in other files.
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Tools.hpp"

#include <fstream>
using std::ifstream;

#include <string>
using std::string;
using std::getline;

#include <vector>
using std::vector;

#include <random>
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <thread>
using std::this_thread::sleep_for;

#include <chrono> 
using std::chrono::seconds;

random_device rDev;
default_random_engine engine(rDev());

int rand_int_between(int low, int high)
{
	uniform_int_distribution<int> uniform_dist(low, high);
	return uniform_dist(engine);
}

bool does_file_exist(const string& file)
{
	ifstream ifile(file);

	return ifile.good();
}

int get_choice(const string& prompt, const vector<string>& choices)
{
	string str = "";

	while (true)
	{
		cout << prompt << endl;
		cout << "Select from the following options: " << endl;
		for (int i = 0; i < choices.size(); ++i)
			cout << choices[i] << endl;

		getline(cin, str);

		for (int i = 0; i < choices.size(); ++i)
		{
			if (str == choices[i])
			{
				return i;
			}
		}
	}

	return -1;
}

void print_and_wait(const string& str, int println, int time)
{
	cout << str;
	for (int i = 0; i < time; ++i)
		cout << endl;

	sleep_for(seconds(time));
}