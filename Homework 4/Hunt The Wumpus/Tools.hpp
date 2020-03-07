//Tools.hpp
//Justyn Durnford
//Created on 2/25/2020
//Last updated on 3/3/2020
//Contains functions and information of general use
//to be used in other files.
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef TOOLS_HPP
#define TOOLS_HPP

#include "Room.hpp"

#include <string>
#include <vector>

//
int rand_int_between(int low, int high);

//Opens an ifstream for the given file and determines
//if the file exists using the good() member function.
//RETURNS TRUE IF FILE EXISTS
//RETURNS FALSE OTHERWISE
bool does_file_exist(const std::string& str);

//
int get_choice(const std::string& prompt, const std::vector<std::string>& choices);

//
void print_and_wait(const std::string& str, int println, int time);

#endif //TOOLS_HPP