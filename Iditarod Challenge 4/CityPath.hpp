// CityPath.hpp
// Justyn Durnford
// Created on 4/16/2020
// Last updated on 4/20/2020

#ifndef CITYPATH_HPP
#define CITYPATH_HPP

#include "CityNode.hpp"

#include <vector>

class CityPath
{
	std::vector<unsigned int> _path;

	public:

	CityPath();

	~CityPath();

	void addCity(const CityNode& c);
};

#endif // CITYPATH_HPP