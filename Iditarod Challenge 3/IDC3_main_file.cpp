// IDC3_main_file.cpp
// Justyn Durnford
// Created on 4/6/2020
// Last updated on 4/11/2020

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
	unique_ptr<CityNode> c1 = make_unique<CityNode>("usa13509.tsp", 1);
	println(to_string(c1->Latitude()));
	println(to_string(c1->Longitude()));

	unique_ptr<CityNode> c2 = make_unique<CityNode>("usa13509.tsp", 2);
	println(to_string(c2->Latitude()));
	println(to_string(c2->Longitude()));

	unique_ptr<CityNode> c3 = make_unique<CityNode>("usa13509.tsp", 3);
	println(to_string(c3->Latitude()));
	println(to_string(c3->Longitude()));

	return 0;
}