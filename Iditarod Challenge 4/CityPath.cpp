// CityPath.cpp
// Justyn Durnford
// Created on 4/16/2020
// Last updated on 4/28/2020

#include "CityPath.hpp"

// #include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

CityPath::CityPath() {}

CityPath::~CityPath() {}

void CityPath::addCity(const CityNode& cNode)
{
	_path.push_back(cNode.Number());
}

unsigned int CityPath::getCityID(unsigned int index) const
{
	return _path[index];
}

unsigned int CityPath::size() const
{
	return _path.size();
}

void CityPath::print() const
{
	for (unsigned int i = 0; i < _path.size(); ++i)
	{
		cout << _path[i] << endl;
	}
}