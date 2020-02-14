//tokenizer2_main.cpp
//Justyn Durnford
//Created on 2/10/2020
//Last Updated on 2/10/2020

#include "Token.hpp"

#include <string>
using std::string;
using std::size_t;
using std::to_string;

#include <cstring>
using std::strstr;

#include <sstream>
using std::istringstream;

#include <vector>
using std::vector;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

token::token(const std::string& str, const std::size_t& c, const std::size_t& r)
{
	value = str;
	column = c;
	row = r;
}

void print_token(const token& t)
{
	cout << "Row " << t.row;
	cout << ", Column " << t.column;
	cout << ": \"" << t.value;
	cout << "\"" << endl;
}

void print_tokens(const vector<token>& tokens)
{
	for (const token& t : tokens)
		print_token(t);
}

void line_to_tokens(vector<token>& tokens, const string& line, const size_t& row)
{
	size_t col;
	string str;
	istringstream iline(line);

	if (!line.empty())
	{
		while (!iline.eof())
		{
			iline >> str;

			if (!iline.eof())
			{
				col = line.find(str) + 1;
				token t(str, col, row);
				tokens.push_back(t);
			}
		}
	}
	else //line.empty()
	{
		token t("Empty Line", 1, row);
		tokens.push_back(t);
	}
}

bool does_file_exist(const char* file)
{
	ifstream ifile(file);
	return ifile.good();
}

int main(int argc, char** argv)
{
	for (int i = 0; i < argc; ++i)
	{
		if (strstr(argv[i], ".txt") != nullptr)
		{
			if (does_file_exist(argv[i]))
			{

			}
		}
	}

	return 0;
}