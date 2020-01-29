//c_style_strings.cpp
//Justyn P. Durnford
//Created on 1/23/2020
//Last Updated on 1/23/2019
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%201

#include <iostream>
using std::cout;
using std::endl;

//Returns the length of the given C-string.
unsigned int str_size(const char* cstr)
{
	unsigned int size = 0;

	//The end of a C-string is denoted by the null character, '\0'.
	//By treating the const char* as a const char[] (which it really is),
	//We can go through each individual character until we find the null
	//character and count the characters.
	while (cstr[size] != '\0')
		++size;

	//The \0 still counts as a character.
	return size + 1;
}

//Returns true if the two given C-strings are equivelent.
//Returns false otherwise.
bool str_cmp(const char* cstr1, const char* cstr2)
{
	if (str_size(cstr1) == str_size(cstr2))
	{
		for (unsigned int i = 0; i < str_size(cstr1); ++i)
		{
			if (cstr1[i] != cstr2[i])
				return false;
		}
		return true;
	}
	return false;
}

//Dynamically allocates a copy of the given C-string on the heap. Calls
//the str_size method to ensure enough memory is allocated.
//IMPORTANT: If this method is used you MUST call delete[] on the pointer
//when it is no longer used, or assign it to a smart pointer. Failure to
//do so will result in a memory leak.
const char* str_dup(const char* cstr)
{
	//Creates a C-string on the heap with size equal to that of the
	//given C-string, cstr.
	char* newcstr = new char[str_size(cstr)];

	//Loops through and copies each character of cstr to newcstr.
	for (unsigned int i = 0; i < str_size(newcstr) - 1; ++i)
		newcstr[i] = cstr[i];

	return newcstr;
}

//Returns the first occurance of x within the C-string cstr. If it
//cannot be found, this method will return -1.
int find_x(const char* cstr, const char* x)
{
	for (unsigned int i = 0; i < str_size(cstr) - str_size(x); ++i)
	{
		for (unsigned int p = str_size(cstr) - str_size(x); p < str_size(x); ++p)
		{
			
		}
	}

	return -1;
}

void test()
{
	cout << find_x("Hello", "Hell") << endl;
}

int main()
{
	test();
	return 0;
}