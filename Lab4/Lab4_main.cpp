//Lab4_main.cpp
//Justyn P. Durnford
//Created on 2/4/2020
//Last Updated on 2/4/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Lab4

//Standard Library
#include <string>
using std::string;
using std::getline;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <fstream>
using std::ifstream;
using std::ofstream;

//Gets every line from the txt file tied to the ifstream
//and prints it to the terminal window.
//Returns the index of the last line read.
unsigned int readFile(ifstream& fin)
{
	string line;
	unsigned int index = 0;

	while (getline(fin, line))
	{
		cout << line << endl;
		++index;
	}

	return index;
}

int main()
{
	ifstream fin("Lab4txt.txt");
	if (fin)
		cout << readFile(fin) << endl;

	return 0;
}