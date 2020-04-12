// CityNode.hpp
// Justyn Durnford
// Created on 4/6/2020
// Last updated on 4/11/2020

#ifndef CITYNODE_HPP
#define CITYNODE_HPP

#include <string>

void println(const std::string& str);

class CityNode
{
	std::string _fileName = "";
	unsigned int _number = 0;
	double _latitude = 0;
	double _longitude = 0;
	double _graphX = 0;
	double _graphY = 0;

	public:

	CityNode();
	CityNode(const std::string& fileName, unsigned int number);

	~CityNode();

	std::string getFileName() const;
	unsigned int Number() const;
	double Latitude() const;
	double Longitude() const;
	double X() const;
	double Y() const;

	void setNumber(unsigned int number);
	void setLatitude(double latitude);
	void setLongitude(double longitude);
	void setX(double x);
	void setY(double y);
};

#endif // CITYNODE_HPP