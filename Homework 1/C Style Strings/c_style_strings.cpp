//c_style_strings.cpp
//Justyn P. Durnford
//Created on 1/23/2020
//Last Updated on 1/23/2019
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%201

#include <iostream>
using std::cout;
using std::endl;

//Returns the length of the given C-string.
unsigned int cstr_size(const char* cstr)
{
	unsigned int size = 0;

	//The end of a C-string is denoted by the null character, '\0'.
	//By treating the const char* as a const char[] (which it really is),
	//We can go through each individual character until we find the null
	//character and count the characters.
	while (cstr[size] != '\0')
		++size;

	return size;
}

void test()
{
	
}

int main()
{
	test();
	return 0;
}