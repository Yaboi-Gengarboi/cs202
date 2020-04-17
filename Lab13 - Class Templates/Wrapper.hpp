// Wrapper.hpp
// Justyn Durnford
// Created on 4/16/2020
// Last updated on 4/17/2020

#ifndef WRAPPER_HPP
#define WRAPPER_HPP

#include <iostream>

template <typename T>
class Wrapper
{
	T _t;

	friend std::ostream& operator<<(std::ostream& os, const Wrapper<T>& w)
	{
		os << w._t;
		return os;
	}

	public:

	Wrapper(const T& t)
	{
		_t = t;
	}

	~Wrapper() {}
};

#endif // WRAPPER_HPP