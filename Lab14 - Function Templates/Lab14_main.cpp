// Lab14_main.cpp
// Justyn Durnford
// Created 4/21/2020
// Last updated 4/21/2020

#include "Jfraction.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

template <typename T>
T twice(const T& t)
{
	return t + t;
}

string twice(const char* str)
{
	return twice(string(str));
}

int main(int argc, char** argv)
{
	cout << twice(2) << endl;
	cout << twice(2.3) << endl;
	cout << twice(string("Hello")) << endl;
	cout << twice("Hello") << endl;
	cout << twice(Jfraction(2, 3)) << endl;
}