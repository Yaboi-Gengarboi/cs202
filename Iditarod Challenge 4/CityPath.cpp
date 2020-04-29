// CityPath.cpp
// Justyn Durnford
// Created on 4/16/2020
// Last updated on 4/29/2020

#include "CityPath.hpp"

// #include <vector>
using std::vector;

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