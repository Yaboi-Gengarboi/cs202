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

	// Constructors.
	Vector3D();
	Vector3D(double x, double y, double z);
	Vector3D(double vec_arr[3]);

	// Destructor.
	~Vector3D();

	// Returns the specified value.
	double getX() const;
	double getY() const;
	double getZ() const;

	// Sets the specified value to the given value.
	void setX(double x);
	void setY(double y);
	void setZ(double z);

	// Adds the given Vector vec onto the Vector.
	void add(const Vector3D& vec);

	// Subtracts the given Vector vec from the Vector.
	void subtract(const Vector3D& vec);

	// Multiplies the given scalar onto the Vector3D.
	void scale(double scalar);

	// Clears the values of the Vector3D.
	void clear();

	// Returns the length or magnitude of the Vector.
	double magnitude() const;

	// Returns a new copy of the Vector3D.
	Vector3D copy() const;

	// Returns an std::string representation of the Vector3D.
	std::string toString() const;
};

// Returns the dot-product of Vector3D vec1 and vec2.
double dot_product(const Vector3D& vec1, const Vector3D& vec2);

// Returns the cross-product of Vector3D vec1 and vec2.
Vector3D cross_product(const Vector3D& vec1, const Vector3D& vec2);

// Returns the scalar projection of Vector3D vec1 onto vec2.
double scal_proj(const Vector3D& vec1, const Vector3D& vec2);

// Returns the vector projection of Vector3D vec1 onto vec2.
Vector3D vec_proj(const Vector3D& vec1, const Vector3D& vec2);

// Equality operator
bool operator == (const Vector3D& vec1, const Vector3D& vec2);

// Inequality operator
bool operator != (const Vector3D& vec1, const Vector3D& vec2);

std::ostream& operator << (std::ostream& os, const Vector3D& vec);

#endif // VECTOR3D_HPP