// Debug.cpp
// Justyn Durnford
// Created on 4/14/2020
// Last updated on 4/14/2020

#include "Debug.hpp"

// #include <string>
// #include <fstream>

#include <iostream>

void println(const std::string& str)
{
	std::cout << str << '\n';
}

void printGetLine(std::ifstream& fin, std::string& str, bool print)
{
	std::getline(fin, str);
	if (print)
		println(str);
}