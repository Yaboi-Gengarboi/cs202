//fraction_test.cpp
//Justyn P. Durnford
//Created on 1/18/2020
//Last Updated on 1/18/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%200/Fraction

#include "Fraction.hpp"

#include <array>
using std::array;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	Fraction f1;

	Fraction f2(5, 2);

	int f3_arr[2] = { 7, 3 };
	Fraction f3(f3_arr);

	array<int, 2> f4_arr = { 1, 9 };
	Fraction f4(f4_arr);

	Fraction f0(1, 0);

	cout << "f1: " << f1.to_str() << " = " << f1.double_result() << endl;
	cout << "f2: " << f2.to_str() << " = " << f2.double_result() << endl;
	cout << "f3: " << f3.to_str() << " = " << f3.double_result() << endl;
	cout << "f4: " << f4.to_str() << " = " << f4.double_result() << endl;
	cout << "f0: " << f0.to_str() << " = " << f0.double_result() << endl;

	return 0;
}