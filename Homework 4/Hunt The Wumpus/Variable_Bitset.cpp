//Variable_Bitset.hpp
//Justyn Durnford
//Created on 2/27/2020
//Last updated on 2/27/2020
//
//

#include "Variable_Bitset.hpp"
#include "Tools.hpp"

#include <bitset>
using std::bitset;

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::size_t;
using std::to_string;

#include <iostream>
using std::cout;
using std::endl;

variable_bitset::variable_bitset()
{
	bitset<8> subset;
	_bits.push_back(subset);
	_subset_index = 0;
}

variable_bitset::~variable_bitset()
{

}

void variable_bitset::add_bit(bool state)
{
	if (_bit_index == 8) //The subset is full
	{
		//Create new subset
		bitset<8> subset;

		//Set the new flag to state
		subset[0] = state;

		//Add subset to bits
		_bits.push_back(subset);

		//Update subset_index
		++_subset_index;

		//Update _bit_index
		_bit_index = 0;
	}
	else //The last subset is not full
	{
		_bits[_subset_index][_bit_index] = state;

		//Update size
		++_bit_index;
	}

	cout << to_str() << endl;
}

bool variable_bitset::get_bit(const std::size_t& index) const
{
	size_t subset = index % 8;
	size_t bit_index = index - (8 * subset);
	return _bits[subset][bit_index];
}

void variable_bitset::set_bit(const std::size_t& index, bool state)
{
	size_t subset = index % 8;
	size_t bit_index = index - (8 * subset);
	_bits[subset][bit_index] = state;
}

string variable_bitset::to_str() const
{
	string str;
	string substr;

	for (const bitset<8>& subset : _bits)
	{
		substr = subset.to_string();
		reverse_string(substr);
		str += substr;
	}

	return str;
}