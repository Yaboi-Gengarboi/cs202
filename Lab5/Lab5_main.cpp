//Lab5_main.cpp
//Justyn Durnford
//Created on 2/11/2020
//Last Updated on 2/11/2020

#include <fstream>
using std::ifstream;

#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <string>
using std::string;
using std::stoi;
using std::to_string;
using std::getline;

#include <stdexcept>
using std::invalid_argument;

int main()
{
	ifstream fin("data.dat", ios::out | ios::binary);
	int i = -1;
	string str;
	int sum = 0;
	int count = 0;

	while (!fin.eof())
	{
		fin.read(reinterpret_cast<char*>(&i), sizeof(i));
		if (!fin.eof())
		{
			cout << i << endl;
			sum += i;
			++count;
		}
	}
	cout << endl;
	
	cout << "count: " << count << endl;
	cout << "sum: " << sum << endl;

	double mean = (sum * 1.0) / (count * 1.0);
	cout << "mean: " << mean << endl;

	return 0;
}