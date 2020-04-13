// IDC3_main_file.cpp
// Justyn Durnford
// Created on 4/6/2020
// Last updated on 4/12/2020

#include "CityNode.hpp"
// #include <string>
using std::string;
using std::to_string;

#include <memory>
using std::unique_ptr;
using std::make_unique;

#include <iostream>
using std::cout;

int main()
{
	for (unsigned int i = 1; i <= 100; ++i)
	{
		unique_ptr<CityNode> c = make_unique<CityNode>("usa13509.tsp", i);
		println(to_string(c->Latitude()) + "  " + to_string(c->Longitude()));
	}

	return 0;
}