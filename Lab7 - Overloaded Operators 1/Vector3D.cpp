// Vector3D.cpp
// Justyn Durnford
// Created on 3/24/2020
// Last updated on 3/24/2020

#include "Vector3D.hpp"
// <string>
using std::string;
using std::to_string;
// <iostream>
using std::ostream;

#include <cmath>
using std::pow;
using std::sqrt;

Vector3D::Vector3D() { /* Default values are 0.0 */ }

Vector3D::Vector3D(double x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}

Vector3D::Vector3D(double vec_arr[3])
{
	_x = vec_arr[0];
	_y = vec_arr[1];
	_z = vec_arr[2];
}

Vector3D::~Vector3D() { /* Destructor */ }

double Vector3D::getX() const
{
	return _x;
}

double Vector3D::getY() const
{
	return _y;
}

double Vector3D::getZ() const
{
	return _z;
}

void Vector3D::setX(double x)
{
	_x = x;
}

void Vector3D::setY(double y)
{
	_y = y;
}

void Vector3D::setZ(double z)
{
	_z = z;
}

void Vector3D::clear()
{
	_x = 0;
	_y = 0;
	_z = 0;
}

double Vector3D::magnitude() const
{
	double length = 0.0;
	length = pow(_x, 2) + pow(_y, 2) + pow(_z, 2);
	length = sqrt(length);
	return length;
}

void Vector3D::add(const Vector3D& vec)
{
	_x += vec.getX();
	_y += vec.getY();
	_z += vec.getZ();
}

void Vector3D::subtract(const Vector3D& vec)
{
	_x -= vec.getX();
	_y -= vec.getY();
	_z -= vec.getZ();
}

Vector3D Vector3D::copy() const
{
	Vector3D vec(_x, _y, _z);
	return vec;
}

Vector3D& Vector3D::operator = (const Vector3D& vec)
{
	_x = vec._x;
	_y = vec._y;
	_z = vec._z;
	return *this;
}

void Vector3D::scale(double scalar)
{
	_x *= scalar;
	_y *= scalar;
	_z *= scalar;
}

string Vector3D::toString() const
{
	string str = "<";
	str += to_string(_x);
	str += ", ";
	str += to_string(_y);
	str += ", ";
	str += to_string(_z);
	str += ">";
	return str;
}

double dot_product(const Vector3D& vec1, const Vector3D& vec2)
{
	double d = 0.0;
	d = ( vec1.getX() * vec2.getX() );
	d += ( vec1.getY() * vec2.getY() );
	d += ( vec1.getZ() * vec2.getZ() );
	return d;
}

Vector3D cross_product(const Vector3D& vec1, const Vector3D& vec2)
{
	double x = ( vec1.getY() * vec2.getZ() ) - ( vec1.getZ() * vec2.getY() );
	double y = ( vec1.getZ() * vec2.getX() ) - ( vec1.getX() * vec2.getZ() );
	double z = ( vec1.getX() * vec2.getY() ) - ( vec1.getY() * vec2.getX() );
	Vector3D vec(x, y, z);
	return vec;
}

bool operator == (const Vector3D& vec1, const Vector3D& vec2)
{
	return ( vec1.getX() == vec2.getX() ) && ( vec1.getY() == vec2.getY() ) && ( vec1.getZ() == vec2.getZ() );
}

bool operator != (const Vector3D& vec1, const Vector3D& vec2)
{
	return ( vec1.getX() != vec2.getX() ) || ( vec1.getY() != vec2.getY() ) || ( vec1.getZ() != vec2.getZ() );
}

ostream& operator << (std::ostream& os, const Vector3D& vec)
{
	os << vec.toString() << '\n';
	return os;
}