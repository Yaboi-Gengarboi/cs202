// Vector3D.hpp
// Justyn Durnford
// Created on 3/24/2020
// Last updated on 3/24/2020

#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

#include <string>
#include <iostream>

class Vector3D
{
	double _x = 0.0;
	double _y = 0.0;
	double _z = 0.0;

	public:

	Vector3D();
	Vector3D(double x, double y, double z);
	Vector3D(double vals[3]);

	~Vector3D();

	double getX() const;
	double getY() const;
	double getZ() const;

	double setX(double x);
	double setY(double y);
	double setZ(double z);

	double magnitude() const;

	std::string toString() const;
};

#endif // VECTOR3D_HPP