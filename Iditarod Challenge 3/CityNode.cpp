// CityNode.cpp
// Justyn Durnford
// Created on 4/8/2020
// Last updated on 4/11/2020

#include "CityNode.hpp"
// #include <string>
using std::string;
using std::to_string;
using std::getline;
using std::stoul;
using std::stod;

#include <fstream>
using std::ifstream;

// DEBUG
#include <iostream>
using std::cout;


// DEBUG
void println(const string& str)
{
	cout << str << '\n';
}


/* // DEBUG
void printGetLine(ifstream& fin, string& str)
{
	getline(fin, str);
	println(str);
}
*/

CityNode::CityNode() { /* Default constructor */ }

CityNode::CityNode(const string& fileName, unsigned int number)
{
	ifstream fin(fileName);

	if (fin.good())
	{
		// println("fin.good"); // DEBUG

		_fileName = fileName;
		string line = "";
		string str = "";

		while (line.find("DIMENSION") == -1)
		{
			getline(fin, line);
			// printGetLine(fin, line); // DEBUG
		}

		str = line.substr(12);
		unsigned int dimension = stoul(str);

		if (number <= dimension && number != 0)
		{
			while (line != "NODE_COORD_SECTION")
			{
				// println(line); // DEBUG
				getline(fin, line);
				// printGetLine(fin, line); // DEBUG
			}

			unsigned int num = -1;

			while (num != number)
			{
				getline(fin, line);
				// printGetLine(fin, line); // DEBUG
				str = line.substr(0, line.find(' '));
				// println(str); // DEBUG
				num = stoul(str);
			}

			str = line.substr(line.find(' ') + 1);
			println(str); // DEBUG

			println(str.substr(0, str.find(' '))); // DEBUG
			_latitude = stod(str.substr(0, str.find(' ')));
			
			str = str.substr(str.find(' ') + 1);
			println(str); // DEBUG

			println(str.substr(0, str.find(' '))); // DEBUG
			_longitude = stod(str.substr(0, str.find(' ')));
		}
	}
}

CityNode::~CityNode() { /* Destructor */ }

string CityNode::getFileName() const
{
	return _fileName;
}

unsigned int CityNode::Number() const
{
	return _number;
}

double CityNode::Latitude() const
{
	return _latitude;
}

double CityNode::Longitude() const
{
	return _longitude;
}

double CityNode::X() const
{
	return _graphX;
}

double CityNode::Y() const
{
	return _graphY;
}

void CityNode::setNumber(unsigned int number)
{
	_number = number;
}

void CityNode::setLatitude(double latitude)
{
	_latitude = latitude;
}

void CityNode::setLongitude(double longitude)
{
	_longitude = longitude;
}

void CityNode::setX(double x)
{
	_graphX = x;
}

void CityNode::setY(double y)
{
	_graphY = y;
}