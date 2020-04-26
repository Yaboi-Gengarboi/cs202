// IDC4_main.cpp
// Justyn Durnford
// Created on 4/14/2020
// Last updated on 4/26/2020

#include "TSP_Solver.hpp"
// #include <string>
// #include <vector>

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	CityList cList("TSP Files/usa13509.tsp", 13509);

	TSP_Solver solver;

	CityPath cPath = solver.solveRandomly(cList);

	cPath.print();

	cout << solver.calcDistance(cList, cPath) << endl;

	return 0;
}