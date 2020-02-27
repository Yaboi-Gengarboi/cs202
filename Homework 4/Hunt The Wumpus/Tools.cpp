//Tools.cpp
//Justyn Durnford
//Created on 2/27/2020
//Last updated on 2/27/2020
//Contains functions and information of general use
//to be used in other files.
//

#include "Tools.hpp"

#include <string>
using std::string;
using std::size_t;

void reverse_string(string& str)
{
	size_t n = str.size();
	char tmp;

	for (int i = 0; i < n / 2; i++)
	{
		tmp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = tmp;
	}
}