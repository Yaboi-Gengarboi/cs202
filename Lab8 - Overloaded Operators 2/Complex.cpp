// Complex.cpp
// Justyn Durnford
// Created on 3/27/2020
// Last updated on 3/29/2020

#include "Complex.hpp"
// <string>
// <iostream>
using std::string;
using std::to_string;
using std::ostream;

Complex::Complex() {}

Complex::Complex(double real)
{
	_real = real;
}

Complex::Complex(double real, double imag)
{
	_real = real;
	_imag = imag;
}

Complex::Complex(double vals[2])
{
	_real = vals[0];
	_imag = vals[1];
}

Complex::~Complex() {}

double Complex::getReal() const
{
	return _real;
}

double Complex::getImaginary() const
{
	return _imag;
}

void Complex::setReal(double real)
{
	_real = real;
}

void Complex::setImaginary(double imag)
{
	_imag = imag;
}

Complex Complex::copy() const
{
	Complex cplx(_real, _imag);
	return cplx;
}

string Complex::toString() const
{
	string str = "";
	str += to_string(_real);
	
	if (_imag > 0)
		str += " + " + to_string(_imag) + "i";
	else if (_imag < 0)
		str += " - " + to_string(_imag) + "i";

	return str;
}

Complex operator + (const Complex& cplx, double num)
{
	Complex newcplx(cplx.getReal() + num, cplx.getImaginary());
	return newcplx;
}

Complex operator + (const Complex& cplx1, const Complex& cplx2)
{
	double real = cplx1.getReal() + cplx2.getReal();
	double imag = cplx1.getImaginary() + cplx2.getImaginary();
	Complex newcplx(real, imag);
	return newcplx;
}

Complex operator - (const Complex& cplx, double num)
{
	Complex newcplx(cplx.getReal() - num, cplx.getImaginary());
	return newcplx;
}

Complex operator - (const Complex& cplx1, const Complex& cplx2)
{
	double real = cplx1.getReal() - cplx2.getReal();
	double imag = cplx1.getImaginary() - cplx2.getImaginary();
	Complex newcplx(real, imag);
	return newcplx;
}

Complex& operator += (Complex& cplx, double num)
{
	cplx.setReal(cplx.getReal() + num);
	return cplx;
}

Complex& operator += (Complex& cplx1, const Complex& cplx2)
{
	cplx1.setReal(cplx1.getReal() + cplx2.getReal());
	cplx1.setImaginary(cplx1.getImaginary() + cplx2.getImaginary());
	return cplx1;
}

ostream& operator << (ostream& os, const Complex& cplx)
{
	os << cplx.toString();
	return os;
}