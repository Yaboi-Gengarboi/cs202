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

//Dynamically allocates a substring of the given C-string on the heap. Calls
//the str_size method to ensure enough memory is allocated.
//IMPORTANT: If this method is used you MUST call delete[] on the pointer
//when it is no longer used, or assign it to a smart pointer. Failure to
//do so will result in a memory leak.
char* sub_str(const char* cstr, unsigned int begin, unsigned int end)
{
	//If end is greater than the size of cstr, we will just reassign end
	//to the size of cstr.
	if (end > str_size(cstr))
		end = str_size(cstr);

	//If begin is greater than end, we will just return a copy of cstr.
	if (begin > end)
		return (char*)cstr;

	//Creates a C-string on the heap with size equal to that of the
	//range of characters of cstr, end - begin.
	unsigned int size = end - begin;
	cout << size << endl;
	char* newcstr = new char[size];
	cout << str_size(newcstr) << endl;

	//Loops through and copies each character of cstr to newcstr
	//within the range [begin, end).
	for (unsigned int i = begin; i < end; ++i)
	{
		cout << cstr[i] << endl;
		newcstr[i] = cstr[i];
		cout << newcstr[i] << endl;
	}

	return newcstr;
}

//Dynamically allocates a copy of the given C-string on the heap. Calls
//the str_size method to ensure enough memory is allocated.
//IMPORTANT: If this method is used you MUST call delete[] on the pointer
//when it is no longer used, or assign it to a smart pointer. Failure to
//do so will result in a memory leak.
char* str_dup(const char* cstr)
{
	//Creates a C-string on the heap with size equal to that of the
	//given C-string, cstr.
	char* newcstr = new char[str_size(cstr)];

	//Loops through and copies each character of cstr to newcstr.
	for (unsigned int i = 0; i < str_size(cstr); ++i)
		newcstr[i] = cstr[i];

	return newcstr;
}

//Returns the first occurance of x within the C-string cstr. If it
//cannot be found, this method will return -1.
int find_x(const char* cstr, const char* x)
{
	

	return -1;
}

int main()
{
	//cout << find_x("Hello", "Hell") << endl;
	char* cstr = str_dup("Hello");
	cout << cstr << endl;

	const char* cstr2 = "Hello";
	char* cstr3 = sub_str(cstr2, 0, 5);
	cout << cstr3 << endl;

	delete[] cstr;
	delete[] cstr3;
	cstr = nullptr;
	cstr3 = nullptr;

	return 0;
}