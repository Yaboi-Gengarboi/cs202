// IDC5_main.cpp
// Justyn Durnford
// Created on 4/27/2020
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

#include <fstream>
using std::ofstream;

#include <cmath>
using std::round;

void println()
{
	cout << endl;
}

void println(const string& str)
{
	cout << str << endl;
}

void writeln(ofstream& fout)
{
	fout << endl;
}

void writeln(ofstream& fout, const string& str)
{
	fout << str << endl;
}

void writeSVG(const string& filestr, const CityList& cList, const CityPath& cPath)
{
	ofstream fout(filestr);
	writeln(fout, "<svg version=\"1.1\"");
	writeln(fout, "     baseProfile=\"full\"");
	writeln(fout, "     width=\"10000\" height=\"3000\"");
	writeln(fout, "     xmlns=\"http://www.w3.org/2000/svg\">");
	writeln(fout);

	for (unsigned int i = 0; i < cPath.size() - 1; ++i)
	{
		unsigned int n1 = cPath.getCityID(i) - 1;
		unsigned int n2 = cPath.getCityID(i + 1) - 1;

		println(to_string(i) + " " + to_string(n1) + " " + to_string(n2));

		unsigned int x1 = round((cList.getCity(n1).X() - 720000) / 10000);
		unsigned int x2 = round((cList.getCity(n2).X() - 720000) / 10000);

		unsigned int y1 = round((cList.getCity(n1).Y() - 240000) / 100);
		unsigned int y2 = round((cList.getCity(n2).Y() - 240000) / 100);

		string str = "  <line x1=\"";
		str += to_string(x1) + "\" x2=\"";
		str += to_string(x2) + "\" y1=\"";
		str += to_string(y1) + "\" y2=\"";
		str += to_string(y2) + "\" stroke=\"black\" stroke-width=\"1\" />";
		// <line x1="10" x2="50" y1="110" y2="150" />

		writeln(fout, str);
		writeln(fout);
	}

	writeln(fout, "</svg>");
}

int main()
{
	Jtimer timer;

	string file = "TSP Files\\usa13509.tsp";
	println("Reading TSP file " + file + "...");
	timer.start();
	CityList cList(file, 13509);
	println("Read TSP file " + file + '.');
	println(timer.toString());

	TSP_Solver solver;

	println("Using solveRandomly method...");
	CityPath cPath = solver.solveRandomly(cList);
	println("solveRandomly method used.");
	println(timer.toString());

	println("Writing SVG file...");
	writeSVG("TSP SVG.svg", cList, cPath);
	println("Wrote SVG file.");
	println(timer.toString());

	timer.stop();

	return 0;
}