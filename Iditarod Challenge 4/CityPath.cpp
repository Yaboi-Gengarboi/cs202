// CityPath.cpp
// Justyn Durnford
// Created on 4/16/2020
// Last updated on 4/25/2020

#include "CityPath.hpp"
// #include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

CityPath::CityPath() { }

CityPath::~CityPath() { }

void CityPath::addCity(const CityNode& c)
{
	_path.push_back(c.Number());
}

unsigned int CityPath::getCityID(unsigned int index) const
{
	return _path[index];
}

void CityPath::print() const
{
	for (unsigned int i = 0; i < _path.size(); ++i)
	{
		cout << _path[i] << endl;
	}
}