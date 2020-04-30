// IDC4_main.cpp
// Justyn Durnford
// Created on 4/29/2020
// Last updated on 4/30/2020

#include "CityNode.hpp"
#include "CityList.hpp"
#include "CityPath.hpp"
#include "TSP_Solver.hpp"
#include "Jtimer.hpp"

// #include <string>
using std::string;
using std::to_string;

#include <iostream>
using std::cout;
using std::endl;

void println()
{
	cout << endl;
}

void println(const string& str)
{
	cout << str << endl;
}

int main()
{
	Jtimer timer;

	string file = "usa13509.tsp";
	println("Reading TSP file " + file + "...");
	timer.start();
	CityList cList1(file, 13509);
	println("Read TSP file " + file + '.');
	println(timer.toString());

	TSP_Solver solver;

	println("Using solveRandomly method...");
	CityPath cPath1 = solver.solveRandomly(cList1);
	println("solveRandomly method used.");
	println(timer.toString());

	for (unsigned int i = 0; i < cPath1.size(); ++i)
	{
		cout << cPath1.getCityID(i) << " ";
		if (i % 10 == 0 && i != 0)
			println();
	}

	timer.stop();
	return 0;
}