// main_file.cpp
// Justyn Durnford
// Created on 3/24/2020
// Last updated on 3/24/2020

#include "Vector3D.hpp"
// <iostream>
using std::cout;

int main()
{
	Vector3D vec1(1.0, 3.7, 8.4);
	Vector3D vec2;
	
	cout << vec1;

	vec2 = vec1;

	if (vec2 == vec1)
		cout << "vec2 == vec1? True.\n";
	else
		cout << "vec2 == vec1? False.\n";

	return 0;
}