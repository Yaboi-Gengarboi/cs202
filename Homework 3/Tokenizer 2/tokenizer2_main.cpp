//tokenizer2_main.cpp
//Justyn Durnford
//Created on 2/10/2020
//Last Updated on 2/10/2020

#include "Token.hpp"

#include <string>
using std::string;
using std::size_t;
using std::stoi;
using std::stod;

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

#include <stdexcept>
using std::invalid_argument;

token get_token(const string& str, const size_t& col, const size_t& row)
{
	bool proceed = true;

	try
	{
		int value = stoi(str);
		int_token t;
		t.type = "Integer";
		t.column = col;
		t.row = row;
		t.value = value;
		return t;
	}
	catch (invalid_argument& ia) {/* Proceed to next token type */}

	try
	{
		double value = stod(str);
		double_token t;
		t.type = "Decimal";
		t.column = col;
		t.row = row;
		t.value = value;
		return t;
	}
	catch (invalid_argument & ia) {/* Proceed to next token type */ }


}

bool line_to_tokens(vector<token>& tokens, const string& line, const size_t& row)
{
	size_t col;
	string str;
	istringstream iline(line);

	while (!iline.eof())
	{
		iline >> str;

		if (!iline.eof())
		{
			col = line.find(str);
			token t = get_token(str, col, row);
		}
	}

	return true;
}

int main()
{
	

	return 0;
}