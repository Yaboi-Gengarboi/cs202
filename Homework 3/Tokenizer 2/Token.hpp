//Token.hpp
//Justyn Durnford
//Created on 2/10/2020
//Last Updated on 2/10/2020

#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

struct token
{
	std::string type;
};

struct str_token : token
{
	std::string value;
};

struct int_token : token
{
	int value = 0;
};

struct double_token : token
{
	double value = 0.0;
};

struct identifier_token : token
{
	std::string value = "";
};

#endif //TOKEN_HPP