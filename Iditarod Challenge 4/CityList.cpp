// CityList.cpp
// Justyn Durnford
// Created on 4/12/2020
// Last updated on 4/28/2020

#include "CityList.hpp"

// #include <string>
using std::string;

// #include <vector>

#include <cmath>
using std::pow;
using std::sqrt;

CityList::CityList(const string& fileName, unsigned int size)
{
    _fileName = fileName;
    for (unsigned int i = 1; i <= size; ++i)
        addCity(i);
}

CityList::~CityList() { /* Destructor */ }

void CityList::addCity(unsigned int number)
{
    CityNode c(_fileName, number);
    _list.push_back(c);
}

CityNode CityList::getCity(unsigned int index) const
{
    return _list[index];
}

string CityList::fileName() const
{
    return _fileName;
}

unsigned int CityList::size() const
{
    return _list.size();
}

void CityList::removeCity(unsigned int index)
{
    _list.erase(_list.begin() + index);
}

double CityList::distance(unsigned int first, unsigned int second) const
{
    double distance = -1;

    if (first == second)
        return 0;

    if (first >= _list.size() || second >= _list.size())
        return -1;

    distance = pow(( _list[second].X() - _list[first].X() ), 2);
    distance += pow(( _list[second].Y() - _list[first].Y() ), 2);
    distance = sqrt(distance);

    return distance;
}