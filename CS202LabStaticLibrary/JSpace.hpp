//JSpace.hpp
//Justyn Durnford
//Created on 2/27/2020
//Last Updated on 2/27/2020
//

#ifndef JSPACE_HPP
#define JSPACE_HPP

#include <string>

namespace JSpace
{
	//This class allows an "exact" representation of the quotient
	//of two integers by storing them and allowing the use of the
	//individual integers or the actual result.
	//A Fraction can be constructed by default, with two individual
	//integers or a C - array.
	//Fraction objects are also capable of arithmetic with integers
	//other Fraction objects.
	//A Fraction can be represented as a std::string with the to_str 
	//method.
	//Note that any method that can assign or otherwise modify
	//_denominator will never allow it to be set to 0 and will result
	//in _denominator remaining at its default value of 1.
	class Fraction
	{
		int _numerator = 0;
		int _denominator = 1;

	public:

		//Constructors.
		Fraction();
		Fraction(int numer, int denom);
		Fraction(int f_arr[2]);

		//Destructor.
		~Fraction();

		//Returns _numerator.
		int get_numerator() const;

		//Returns _denominator.
		int get_denominator() const;

		//Sets _numerator to numer.
		void set_numerator(int numer);

		//Sets _denominator to denom.
		void set_denominator(int denom);

		//Returns the integer division of the fraction.
		int int_result() const;

		//Returns the decimal division of the fraction.
		double double_result() const;

		//Adds num onto the fraction.
		void add(int num);

		//Subtracts num onto the fraction.
		void subtract(int num);

		//Multiplies num onto the fraction.
		void multiply(int num);

		//Divides num onto the fraction.
		void divide(int num);

		//Adds frac onto the fraction.
		void add(const Fraction& frac);

		//Subtracts frac onto the fraction.
		void subtract(const Fraction& frac);

		//Multiplies frac onto the fraction.
		void multiply(const Fraction& frac);

		//Divides frac onto the fraction.
		void divide(const Fraction& frac);

		//Returns a std::string representation of the fraction.
		std::string to_str() const;
	};
}

#endif //JSPACE_HPP