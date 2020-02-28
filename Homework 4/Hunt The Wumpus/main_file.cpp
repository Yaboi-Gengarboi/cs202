//main_file.cpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 2/25/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"
#include "Monster.hpp"
#include "Player.hpp"
#include "Tools.hpp"

#include <memory>
using std::shared_ptr;
using std::make_unique;

#include <vector>
using std::vector;

#include <string>
using std::size_t;
using std::string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	for (int i = 0; i < 200; ++i)
	{
		cout << rand_int_between(1, 20) << endl;
	}

	return 0;
}