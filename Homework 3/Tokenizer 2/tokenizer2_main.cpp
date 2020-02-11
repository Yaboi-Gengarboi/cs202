//tokenizer2_main.cpp
//Justyn Durnford
//Created on 2/10/2020
//Last Updated on 2/10/2020

#include "Token.hpp"

#include <string>
using std::string;

#include <sstream>
using std::istringstream;

#include <vector>
using std::vector;

#include <cctype>
using std::isspace;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
token get_token(const string& str)
{

}
*/

vector<string> str_to_tokens(const string& line)
{
	string str;
	istringstream istr(line);
	vector<string> tokens;

	while (!istr.eof())
	{
		istr >> str;
		tokens.push_back(str);
	}

	return tokens;
}

int main()
{
	vector<string> tokens = str_to_tokens("Hey there mister!");

	for (string& str : tokens)
	{
		cout << str << endl;
	}

	return 0;
}