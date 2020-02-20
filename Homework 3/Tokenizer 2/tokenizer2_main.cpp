//tokenizer2_main.cpp
//Justyn Durnford
//Created on 2/10/2020
//Last Updated on 2/15/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%203/Tokenizer%202

#include "Token.hpp"

#include <string>
using std::string;
using std::size_t;
using std::to_string;
using std::getline;

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

			col = line.find(str) + 1;
			token t(str, col, row);
			tokens.push_back(t);
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

vector<string> file_to_lines(const char* file)
{
	ifstream ifile(file);
	string line;
	vector<string> lines;

	while (!ifile.eof())
	{
		getline(ifile, line);

		lines.push_back(line);
	}
	
	return lines;
}

vector<string> get_input()
{
	vector<string> lines;
	string line;
	bool proceed = false;

	while (!proceed)
	{
		cout << "Enter some text. Type END to stop." << endl;
		getline(cin, line);

		if (line != "END")
		{
			lines.push_back(line);
		}
		else
			proceed = true;
	}

	return lines;
}

int main(int argc, char** argv)
{
	vector<string> lines;
	vector<token> tokens;
	bool io = true;

	for (int i = 0; i < argc; ++i)
	{
		if (strstr(argv[i], ".txt") != nullptr)
		{
			if (does_file_exist(argv[i]))
			{
				io = false;
				lines = file_to_lines(argv[i]);

				for (size_t i = 0; i < lines.size(); ++i)
				{
					line_to_tokens(tokens, lines[i], i + 1);
				}

				print_tokens(tokens);
				return 0;
			}
		}
	}

	if (io)
	{
		lines = get_input();

		for (size_t i = 0; i < lines.size(); ++i)
		{
			line_to_tokens(tokens, lines[i], i + 1);
		}

		print_tokens(tokens);
		return 0;
	}

	return 0;
}