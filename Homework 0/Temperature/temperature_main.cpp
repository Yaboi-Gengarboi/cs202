//temperature_main.cpp
//Justyn P. Durnford
//Created on 1/15/2020
//Last Updated on 1/16/2020

#include <string>
using std::string;
using std::stod;

#include <cstdlib>
using std::strtod;

#include <iostream>
using std::cout;
using std::endl;

//Takes the given Cstring, cstr, which
//represents a temperature in Fahrenheit
//and converts it to celcius using the 
//strtod method in the header cstdlib.
double c_ctof(const char* cstr)
{
	double return_value = 0.0;

	return return_value;
}

//Takes the given Cstring, cstr, which
//represents a temperature in Fahrenheit
//and converts it to celcius using the 
//stod method in the header string.
double cpp_ftoc(const char* cstr)
{
	double return_value = 0.0;

	//Creates a temporary C++string that
	//stod uses.
	string str(cstr);
	return_value = stod(str);

	//Modifies the double from fahrenheit
	//to celcius.
	return_value *= 5.0 / 9.0;
	return_value += 32;

	return return_value;
}

int main(int argc, char** argv)
{
	return 0;
}