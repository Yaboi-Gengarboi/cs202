//names.hpp
//Justyn Durnford
//Created on 2/13/2020
//Last Updated on 2/13/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Lab6

#ifndef NAMES_HPP
#define NAMES_HPP

#include <string>

namespace Justyn
{
	class Point
	{
		double _x;
		double _y;
		double _z;

		public:

			//Constructors.
			Point();
			Point(double x, double y, double z);

			//Destructor.
			~Point();

			//String representation of Point.
			std::string to_str();
	};
}

#endif //NAMES_HPP