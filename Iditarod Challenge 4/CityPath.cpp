// CityPath.cpp
// Justyn Durnford
// Created on 4/16/2020
// Last updated on 4/20/2020

#include "CityPath.hpp"
// #include <vector>
using std::vector;

CityPath::CityPath() { }

CityPath::~CityPath() { }

void CityPath::addCity(const CityNode& c)
{
	_path.push_back(c.Number());
}