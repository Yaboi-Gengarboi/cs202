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
	unique_ptr<CityNode> c1 = make_unique<CityNode>("usa13509.tsp", 1);
	println(to_string(c1->Latitude()));
	println(to_string(c1->Longitude()));

	unique_ptr<CityNode> c2 = make_unique<CityNode>("brd14051.tsp", 2);
	println(to_string(c2->Latitude()));
	println(to_string(c2->Longitude()));

	unique_ptr<CityNode> c3 = make_unique<CityNode>("fnl4461.tsp", 3);
	println(to_string(c3->Latitude()));
	println(to_string(c3->Longitude()));

	unique_ptr<CityNode> c4 = make_unique<CityNode>("nrw1379.tsp", 4);
	println(to_string(c4->Latitude()));
	println(to_string(c4->Longitude()));

	unique_ptr<CityNode> c5 = make_unique<CityNode>("rl5915.tsp", 5);
	println(to_string(c5->Latitude()));
	println(to_string(c5->Longitude()));

	return 0;
}