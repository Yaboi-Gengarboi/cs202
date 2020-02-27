//Variable_Bitset.hpp
//Justyn Durnford
//Created on 2/25/2020
//Last updated on 2/25/2020
//
//

#ifndef VARIABLE_BITSET_HPP
#define VARIABLE_BITSET_HPP

#include <bitset>
#include <vector>
#include <string>

class variable_bitset
{
	std::vector<std::bitset<8>> _bits;

	std::size_t _size = 0;

	public:

		bool get_bit(const std::size_t& index) const;

		void set_bit(const std::size_t& index, bool state);

		std::bitset<8> get_subset(const std::size_t& index) const;

		std::vector<std::bitset<8>> get_bitset() const;

		std::size_t get_size() const;

		std::string to_str() const;
};

#endif //VARIABLE_BITSET_HPP