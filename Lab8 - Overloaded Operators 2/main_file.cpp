// main_file.cpp
// Justyn Durnford
// Created on 3/27/2020
// Last updated on 3/29/2020

#include "Complex.hpp"
// <stream>
// <iostream>
using std::cout;

int main()
{
	Complex c1 = Complex(2, 5);
	Complex c2 = Complex(4, 1);

	cout << c1 << '\n';
	cout << c2 << '\n';

	c2 += c1;
	cout << c2 << '\n';

	return 0;
}