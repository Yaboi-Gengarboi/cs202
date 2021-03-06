//Token.hpp
//Justyn Durnford
//Created on 2/10/2020
//Last Updated on 2/15/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%203/Tokenizer%202

#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

struct token
{
	std::string value;
	std::size_t column;
	std::size_t row;

	token(const std::string& str, const std::size_t& c, const std::size_t& r);
};

#endif //TOKEN_HPP