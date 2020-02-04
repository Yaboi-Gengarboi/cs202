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
using std::ios_base;

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

//Writes the line to the txt file tied to the ofstream n
//times.
void writeToFileN(ofstream& fout, const string& line, const unsigned int& n)
{
	for (unsigned int i = 0; i < n; ++i)
		fout << line << endl;
}

int main()
{
	ifstream fin("Lab4txt.txt");
	unsigned int begin_index = 0;

	if (fin)
		begin_index = readFile(fin);

	ofstream fout("Lab4txt.txt", ios_base::app);
	writeToFileN(fout, "NEWLINE", 5);

	return 0;
}