// CityList.hpp
// Justyn Durnford
// Created on 4/12/2020
// Last updated on 4/12/2020

#ifndef CITYLIST_HPP
#define CITYLIST_HPP

#include "CityNode.hpp"
// #include <string>

#include <vector> // std::vector

class CityList
{
	const char* _fileName;
	const unsigned int _cityCount;
	std::vector<CityNode> _list;

	void addCity(const unsigned int& number);

	public:

	CityList(const char* fileName, const unsigned int& cityCount);

	~CityList();

	CityNode getCity(const unsigned int& index) const;

	CityNode operator [] (const unsigned int& index) const;

	const char* fileName() const;

	const unsigned int cityCount() const;

	double distance(const unsigned int& first, const unsigned int& second) const;
};

#endif // CITYLIST_HPP