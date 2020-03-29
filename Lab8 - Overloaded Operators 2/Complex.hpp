// Complex.hpp
// Justyn Durnford
// Created on 3/27/2020
// Last updated on 3/29/2020

#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <string>
#include <iostream>

class Complex
{
	double _real = 0.0;
	double _imag = 0.0;

	public:

	// Constructors
	Complex();
	Complex(double real);
	Complex(double real, double imag);
	Complex(double vals[2]);

	// Destructor
	~Complex();

	// Return _real and _imag respectively
	double getReal() const;
	double getImaginary() const;

	// Sets the value of _real and _imag to real and imag respectively
	void setReal(double real);
	void setImaginary(double imag);

	// Creates a copy of the Complex number
	Complex copy() const;

	// Returns a std::string representation of the Complex number
	std::string toString() const;
};

Complex operator + (const Complex& cplx, double num);
Complex operator + (const Complex& cplx1, const Complex& cplx2);

Complex operator - (const Complex& cplx, double num);
Complex operator - (const Complex& cplx1, const Complex& cplx2);

Complex& operator += (Complex& cplx, double num);
Complex& operator += (Complex& cplx1, const Complex& cplx2);

std::ostream& operator << (std::ostream& os, const Complex& cplx);

#endif // COMPLEX_HPP