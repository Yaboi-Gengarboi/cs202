//main_file.cpp
//Justyn Durnford
//Created on 2/20/2020
//Last updated on 2/25/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#include "Room.hpp"
#include "Variable_Bitset.hpp"
#include "Monster.hpp"
#include "Player.hpp"

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
	variable_bitset bits;

	for (size_t i = 0; i < 20; ++i)
	{
		bits.add_bit(true);
	}

	return 0;
}