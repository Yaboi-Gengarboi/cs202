// CityList.cpp
// Justyn Durnford
// Created on 4/12/2020
// Last updated on 4/12/2020

#include "CityList.hpp"
// #include "CityNode.hpp"
// #include <string>
// #include <vector>

#include <cmath>
using std::pow;
using std::sqrt;

CityList::CityList(const char* fileName, const unsigned int& cityCount)
    : _fileName(fileName), _cityCount(cityCount)
{
    for (unsigned int i = 1; i <= cityCount; ++i)
        addCity(i);
}

CityList::~CityList() { /* Destructor */ }

void CityList::addCity(const unsigned int& number)
{
    CityNode c(_fileName, number);
    _list.push_back(c);
}

CityNode CityList::getCity(const unsigned int& index) const
{
    if (index <= _cityCount)
        return _list[index];

    else
        return _list[_cityCount];
}

CityNode CityList::operator [] (const unsigned int& index) const
{
    if (index <= _cityCount)
        return _list[index];

    else
        return _list[_cityCount];
}

const char* CityList::fileName() const
{
    return _fileName;
}

const unsigned int CityList::cityCount() const
{
    return _cityCount;
}

double CityList::distance(const unsigned int& first, const unsigned int& second) const
{
    double distance = -1;

    if (first == second)
        return 0;

    if (first >= _cityCount || second >= _cityCount)
        return -1;

    distance = pow(( _list[second].X() - _list[first].X() ), 2);
    distance += pow(( _list[second].Y() - _list[first].Y() ), 2);
    distance = sqrt(distance);

    return distance;
}