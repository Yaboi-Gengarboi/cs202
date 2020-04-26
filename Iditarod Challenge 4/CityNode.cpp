// CityNode.cpp
// Justyn Durnford
// Created on 4/8/2020
// Last updated on 4/25/2020

#include "CityNode.hpp"

#include <string>
using std::string;
using std::to_string;
using std::getline;
using std::stoul;

#include <sstream>
using std::istringstream;

#include <fstream>
using std::ifstream;

#include <iostream>
using std::cout;
using std::endl;

CityNode::CityNode(const char* fileName, unsigned int number)
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
		}

		str = line.substr(12);
		unsigned int dimension = stoul(str);

		if (number <= dimension && number != 0)
		{
			while (line != "NODE_COORD_SECTION")
			{
				getline(fin, line);
			}

			unsigned int num = -1;

			for (unsigned int i = 1; i < number; ++i)
			{
				fin.ignore(256, '\n');
			}
				
			getline(fin, line);
			istringstream istr(line);
			istr >> num;

			cout << num << endl;

			istr >> _latitude;
			_graphY = _latitude;

			istr >> _longitude;
			_graphX = _longitude;
		}
	}
}

CityNode::~CityNode() { /* Destructor */ }

const char* CityNode::fileName() const
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