//temperature_main.cpp
//Justyn P. Durnford
//Created on 1/15/2020
//Last Updated on 1/16/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%200/Temperature

#include <string>
using std::string;
using std::stod;
using std::to_string;

#include <vector>
using std::vector;

#include <cstring>
using std::strtod;
using std::strcmp;

#include <iostream>
using std::cout;
using std::endl;

#include <stdexcept>
using std::invalid_argument;

vector<const char*> invalid;

//Takes the given C-string, cstr, which
//represents a temperature in Celcius
//and converts it to Fahrenheit using the 
//strtod method in the header cstdlib.
double c_ctof(const char* cstr)
{
	double return_value = 0.0;

	return_value = strtod(cstr, nullptr);

	//strtod never throws exceptions, it returns
	//0.0 if the conversion was unsuccessful.
	//Therefore, if 0.0 is the result, we will need
	//to use the strcmp method to check if the
	//original C-String was not 0.0.
	if (return_value == 0.0 && strcmp(cstr, "0.0") != 0) //Unsuccessful conversion
	{
		//Adds the invalid C-String to the vector
		//that will print the invalid arguments in
		//main().
		invalid.push_back(cstr);
	}
	else
	{
		//Modifies the double from celcius
		//to fahrenheit.
		return_value *= 9.0 / 5.0;
		return_value += 32;
	}

	return return_value;
}

//Takes the given C-string, cstr, which
//represents a temperature in Fahrenheit
//and converts it to Celcius using the 
//stod method in the header string.
double cpp_ftoc(const char* cstr)
{
	double return_value = 0.0;

	try
	{
		//Creates a temporary C++string that
		//stod uses.
		string str(cstr);
		return_value = stod(str);

		//Modifies the double from fahrenheit
		//to celcius.
		return_value -= 32;
		return_value *= 5.0 / 9.0;
	}
	catch (invalid_argument & ia) //Invalid conversion
	{
		//Adds the invalid C-String to the vector
		//that will print the invalid arguments in
		//main().
		invalid.push_back(cstr);
	}

	return return_value;
}

int main(int argc, char* argv[])
{
	size_t vec_size = 0;
	double result = 0.0;

	if (argc < 2) //Not enough arguments
	{
		cout << "Not enough arguments entered. Enter at least 2." << endl;
		return 1;
	}

	cout << "Celcius to Fahrenheit:" << endl;
	for (int i = 2; i < argc; ++i)
	{
		result = c_ctof(argv[i]);
		if (invalid.size() > vec_size)
		{
			cout << "ERROR: " << argv[i] << " is not a valid input." << endl;
			++vec_size;
		}
		else
			cout << argv[i] << " -> " << result << endl;
	}

	invalid.clear();
	vec_size = 0;

	cout << "Fahrenheit to Celcius:" << endl;
	for (int i = 2; i < argc; ++i)
	{
		result = cpp_ftoc(argv[i]);
		if (invalid.size() > vec_size)
		{
			cout << "ERROR: " << argv[i] << " is not a valid input." << endl;
			++vec_size;
		}
		else
			cout << argv[i] << " -> " << result << endl;
	}

	return 0;
}