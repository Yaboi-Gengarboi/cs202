// CityList.hpp
// Justyn Durnford
// Created on 4/12/2020
// Last updated on 4/28/2020

#ifndef CITYLIST_HPP
#define CITYLIST_HPP

#include "CityNode.hpp"

// #include <string>

#include <vector>

class CityList
{
	std::string _fileName;
	std::vector<CityNode> _list;

	void addCity(unsigned int number);

	public:

	CityList(const std::string& fileName, unsigned int cityCount);

	~CityList();

	CityNode getCity(unsigned int index) const;

	std::string fileName() const;

	unsigned int size() const;

	void removeCity(unsigned int index);

	double distance(unsigned int first, unsigned int second) const;
};

#endif // CITYLIST_HPP