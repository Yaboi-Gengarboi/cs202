//lab2_main.cpp
//Justyn P. Durnford
//Created on 1/23/2020
//Last Updated on 1/23/2020

#include "Point.hpp"

#include <vector>
using std::vector;

int main()
{
	Point pt1;
	Point pt2(3, -4, 7);
	Point pt3(pt2);

	pass_value(pt1);
	pass_reference(pt2);
	pass_const_reference(pt3);
	Point pt4 = return_point();

	vector<Point> pt_vec;

	Point pti;
	for (int i = 0; i < 5; ++i)
	{
		pti.set_x(i);
		pti.set_y(i);
		pti.set_z(i);
		pt_vec.push_back(pti);
	}

	return 0;
}