//names.cpp
//Justyn Durnford
//Created on 2/13/2020
//Last Updated on 2/13/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Lab6

#include "names.hpp"

#include <string>
using std::string;
using std::to_string;

namespace Justyn
{
	Point::Point()
	{
		_x = 0.0;
		_y = 0.0;
		_z = 0.0;
	}

	Point::Point(double x, double y, double z)
	{
		_x = x;
		_y = y;
		_z = z;
	}

	Point::~Point() {/* Destructor */}

	string Point::to_str()
	{
		string str;
		str += "(";
		str += to_string(_x);
		str += ", ";
		str += to_string(_y);
		str += ", ";
		str += to_string(_z);
		str += ")";

		return str.c_str();
	}
}