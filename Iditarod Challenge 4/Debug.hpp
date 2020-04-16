// Debug.hpp
// Justyn Durnford
// Created on 4/14/2020
// Last updated on 4/14/2020

#ifndef DEBUG_HPP
#define DEBUG_HPP

#include <string>
#include <fstream>

void println(const std::string& str);

void printGetLine(std::ifstream& fin, std::string& str, bool print);

#endif // DEBUG_HPP