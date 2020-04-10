// lab11_main_file.cpp
// Justyn Durnford
// Created on 4/10/2020
// Last updated on 4/10/2020

#include <iostream>
using std::cout;

#include <string>
using std::string;
using std::to_string;

void println(const string& str)
{
	cout << str << '\n';
}

class Base_Class
{
	int var_a = 0;
	int var_b = 0;

	void printValues()
	{
		println("a = " + to_string(var_a));
		println("b = " + to_string(var_b));
	}

	public:

	Base_Class()
	{
		println("Base_Class constructor");
		printValues();
	}

	Base_Class(const int& a, const int& b) : var_a{ a }, var_b{ b }
	{
		println("Base_Class constructor");
		printValues();
	}

	~Base_Class()
	{
		println("Base_Class destructor");
	}
};

class Derived_Class : public Base_Class
{
	int var_c = -1;

	void printValues()
	{
		println("c = " + to_string(var_c));
	}

	public:

	Derived_Class()
	{
		println("Derived_Class constructor");
		printValues();
	}

	Derived_Class(const int& c) : var_c(c)
	{
		println("Derived_Class constructor");
		printValues();
	}

	Derived_Class(const int& a, const int& b) : Base_Class{ a, b }
	{
		println("Derived_Class constructor");
		printValues();
	}

	Derived_Class(const int& a, const int& b, const int& c)
		: Base_Class{ a, b }, var_c{ c }
	{
		println("Derived_Class constructor");
		printValues();
	}

	~Derived_Class()
	{
		println("Derived_Class destructor");
	}
};

int main()
{
	{ Base_Class bc1; }

	{ Base_Class bc2(10, 5); }

	{ Derived_Class dc1; }

	{ Derived_Class dc2(20); }

	{ Derived_Class dc3(10, 5); }

	{ Derived_Class dc4(20, 10, 5); }

	return 0;
}