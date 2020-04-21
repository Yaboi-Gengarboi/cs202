// Jfraction.cpp
// Justyn P. Durnford
// Created on 12/14/2019
// Last updated on 4/21/2020

#include "Jfraction.hpp"
// #include <string>
// #include <ostream>

Jfraction::Jfraction() { /* Constructor */ }

Jfraction::Jfraction(int numer, int denom)
{
	_numerator = numer;
	_denominator = denom;
}

Jfraction::Jfraction(int fr_arr[2])
{
	_numerator = fr_arr[0];
	_denominator = fr_arr[1];
}

Jfraction::Jfraction(const Jfraction& fr)
{
	_numerator = fr.getNumerator();
	_denominator = fr.getDenominator();
}

Jfraction::~Jfraction() { /* Destructor */ }

int Jfraction::getNumerator() const
{
	return _numerator;
}

int Jfraction::getDenominator() const
{
	return _denominator;
}

void Jfraction::setNumerator(int numer)
{
	_numerator = numer;
}

void Jfraction::setDenominator(int denom)
{
	_denominator = denom;
}

int Jfraction::intResult() const
{
	return _numerator / _denominator;
}

double Jfraction::doubleResult() const
{
	return ( ( 1.0 * _numerator ) / ( 1.0 * _denominator ) );
}

bool Jfraction::isValid() const
{
	return _denominator == 0;
}

std::string Jfraction::toString() const
{
	std::string str = "";
	str += std::to_string(_numerator);
	str += " / ";
	str += std::to_string(_denominator);
	return str;
}

Jfraction& Jfraction::operator = (const Jfraction& fr)
{
	_numerator = fr.getNumerator();
	_denominator = fr.getDenominator();
	return *this;
}

Jfraction& Jfraction::operator = (int i)
{
	_numerator = i;
	_denominator = 1;
	return *this;
}

Jfraction& Jfraction::operator += (const Jfraction& fr)
{
	int fr_arr[2] = { fr.getNumerator(), fr.getDenominator() };
	int temp = 0;

	if (_denominator != fr_arr[1])
	{
		_numerator *= fr_arr[1];
		fr_arr[0] *= _denominator;

		temp = _denominator;
		_denominator *= fr_arr[1];
		fr_arr[1] *= temp;
	}

	_numerator += fr_arr[0];
	return *this;
}

Jfraction& Jfraction::operator += (int i)
{
	i *= _denominator;
	_numerator += i;
	return *this;
}

Jfraction& Jfraction::operator -= (const Jfraction& fr)
{
	int fr_arr[2] = { fr.getNumerator(), fr.getDenominator() };
	int temp = 0;

	if (_denominator != fr_arr[1])
	{
		_numerator *= fr_arr[1];
		fr_arr[0] *= _denominator;

		temp = _denominator;
		_denominator *= fr_arr[1];
		fr_arr[1] *= temp;
	}

	_numerator -= fr_arr[0];
	return *this;
}

Jfraction& Jfraction::operator -= (int i)
{
	i *= _denominator;
	_numerator -= i;
	return *this;
}

Jfraction& Jfraction::operator *= (const Jfraction& fr)
{
	_numerator *= fr.getNumerator();
	_denominator *= fr.getDenominator();
	return *this;
}

Jfraction& Jfraction::operator *= (int i)
{
	_numerator *= i;
	return *this;
}

Jfraction& Jfraction::operator /= (const Jfraction& fr)
{
	_numerator *= fr.getDenominator();
	_denominator *= fr.getNumerator();
	return *this;
}

Jfraction& Jfraction::operator /= (int i)
{
	_denominator *= i;
	return *this;
}

Jfraction operator + (const Jfraction& fr1, const Jfraction& fr2)
{
	int numer = 0;
	int denom = 0;

	if (fr1.getDenominator() != fr2.getDenominator())
	{
		denom = fr1.getDenominator() * fr2.getDenominator();
		numer = fr1.getNumerator() * fr2.getDenominator() + fr2.getNumerator() * fr1.getDenominator();
	}
	else
	{
		numer = fr1.getNumerator() + fr2.getNumerator();
		denom = fr1.getDenominator();
	}

	Jfraction newfr(numer, denom);
	return newfr;
}

Jfraction operator + (const Jfraction& fr, int i)
{
	int numer = fr.getNumerator();
	int denom = fr.getDenominator();

	numer += i * fr.getDenominator();

	Jfraction newfr(numer, denom);
	return newfr;
}

Jfraction operator - (const Jfraction& fr1, const Jfraction& fr2)
{
	int numer = 0;
	int denom = 0;

	if (fr1.getDenominator() != fr2.getDenominator())
	{
		denom = fr1.getDenominator() * fr2.getDenominator();
		numer = fr1.getNumerator() * fr2.getDenominator() - fr2.getNumerator() * fr1.getDenominator();
	}
	else
	{
		numer = fr1.getNumerator() - fr2.getNumerator();
		denom = fr1.getDenominator();
	}

	Jfraction newfr(numer, denom);
	return newfr;
}

Jfraction operator - (const Jfraction& fr, int i)
{
	int numer = fr.getNumerator();
	int denom = fr.getDenominator();

	numer -= i * fr.getDenominator();

	Jfraction newfr(numer, denom);
	return newfr;
}

Jfraction operator * (const Jfraction& fr1, const Jfraction& fr2)
{
	int numer = fr1.getNumerator() * fr2.getNumerator();
	int denom = fr1.getDenominator() * fr2.getDenominator();

	Jfraction newfr(numer, denom);
	return newfr;
}

Jfraction operator * (const Jfraction& fr, int i)
{
	int numer = fr.getNumerator() * i;
	int denom = fr.getDenominator();

	Jfraction newfr(numer, denom);
	return newfr;
}

Jfraction operator / (const Jfraction& fr1, const Jfraction& fr2)
{
	int numer = fr1.getNumerator() * fr2.getDenominator();
	int denom = fr1.getDenominator() * fr2.getNumerator();

	Jfraction newfr(numer, denom);
	return newfr;
}

Jfraction operator / (const Jfraction& fr, int i)
{
	int numer = fr.getNumerator();
	int denom = fr.getDenominator() * i;

	Jfraction newfr(numer, denom);
	return newfr;
}

bool operator == (const Jfraction& fr1, const Jfraction& fr2)
{
	if (fr1.doubleResult() == fr2.doubleResult())
		return true;
	return false;
}

bool operator == (const Jfraction& fr, int i)
{
	if (fr.intResult() == i)
		return true;
	return false;
}

bool operator == (const Jfraction& fr, double d)
{
	if (fr.doubleResult() == d)
		return true;
	return false;
}

bool operator != (const Jfraction& fr1, const Jfraction& fr2)
{
	if (fr1.doubleResult() != fr2.doubleResult())
		return true;
	return false;
}

bool operator != (const Jfraction& fr, int i)
{
	if (fr.intResult() != i)
		return true;
	return false;
}

bool operator != (const Jfraction& fr, double d)
{
	if (fr.doubleResult() != d)
		return true;
	return false;
}

std::ostream& operator << (std::ostream& os, const Jfraction& fr)
{
	os << fr.toString();
	return os;
}