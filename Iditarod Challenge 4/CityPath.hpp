// CityPath.hpp
// Justyn Durnford
// Created on 4/16/2020
// Last updated on 4/25/2020

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

	unsigned int getCityID(unsigned int index) const;

	unsigned int size() const;

	void print() const;
};

#endif // CITYPATH_HPP