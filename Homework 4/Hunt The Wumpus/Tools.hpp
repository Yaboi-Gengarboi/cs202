//Tools.hpp
//Justyn Durnford
//Created on 2/25/2020
//Last updated on 2/27/2020
//Contains functions and information of general use
//to be used in other files.
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%204/Hunt%20The%20Wumpus

#ifndef TOOLS_HPP
#define TOOLS_HPP

#include "Room.hpp"

//Returns a randomly generated number using the xorshift
//method. Has a period of 2^128 - 1.
unsigned int xor128();

//Uses the xor128 function to generate a random number
//between and including the bounds given by low and
//high.
unsigned int rand_int_between(int low, int high);

//Opens an ifstream for the given file and determines
//if the file exists using the good() member function.
//RETURNS TRUE IF FILE EXISTS
//RETURNS FALSE OTHERWISE
bool does_file_exist(const char* file);

#endif //TOOLS_HPP