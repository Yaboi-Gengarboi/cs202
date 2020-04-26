// IDC4_main.cpp
// Justyn Durnford
// Created on 4/14/2020
// Last updated on 4/25/2020

#include "TSP_Solver.hpp"
// #include <string>
// #include <vector>

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	CityList cList("TSP Files/usa13509.tsp", 13509);

	for (unsigned int i = 0; i < 100; ++i)
		cout << cList[i].Latitude() << "   " << cList[i].Longitude() << endl;

	return 0;
}