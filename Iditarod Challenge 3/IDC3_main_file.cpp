// IDC3_main_file.cpp
// Justyn Durnford
// Created on 4/6/2020
// Last updated on 4/12/2020

#include "CityList.hpp"
// #include <string>
// #include <vector>
using std::to_string;

#include <iostream>
using std::cout;

int main()
{
	CityList cList("usa13509.tsp", 100);

	for (unsigned int i = 0; i < 100; ++i)
		println(to_string(cList[i].Latitude()) + "   " + to_string(cList[i].Longitude()));

	println(to_string(cList.distance(0, 99)));

	return 0;
}