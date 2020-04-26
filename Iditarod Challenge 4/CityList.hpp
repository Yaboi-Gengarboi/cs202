// CityList.hpp
// Justyn Durnford
// Created on 4/12/2020
// Last updated on 4/24/2020

#ifndef CITYLIST_HPP
#define CITYLIST_HPP

#include "CityNode.hpp"

#include <vector>

class CityList
{
	const char* _fileName;
	unsigned int _cityCount;
	std::vector<CityNode> _list;

	void addCity(unsigned int number);

	public:

	CityList(const char* fileName, unsigned int cityCount);

	CityList(const CityList& cList);

	~CityList();

	CityNode getCity(unsigned int index) const;

	CityNode operator [] (unsigned int index) const;

	const char* fileName() const;

	unsigned int cityCount() const;

	void removeCity(unsigned int index);

	double distance(unsigned int first, unsigned int second) const;
};

#endif // CITYLIST_HPP