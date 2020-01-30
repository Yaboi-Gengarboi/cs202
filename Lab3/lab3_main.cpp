//lab3_main.cpp
//Justyn P. Durnford
//Created on 1/30/2020
//Last Updated on 1/30/2020
//

//User-created headers
#include "Point.hpp"

//Standard Library
#include <memory>
using std::unique_ptr;
using std::make_unique;
using std::shared_ptr;
using std::make_shared;
using std::move;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	cout << "Creating raw pointer P..." << endl;
	Point* P = new Point;

	cout << "Creating unique_ptr Q..." << endl;
	unique_ptr<Point> Q = make_unique<Point>(17.39, 0.0, -9.45);

	cout << "Creating unique_ptr R..." << endl;
	unique_ptr<Point> R = nullptr;

	cout << "Moving Q to R..." << endl;
	R = move(Q);

	cout << "Setting the y-value of R from 0.0 to 5.82..." << endl;
	R->set_y(5.82);

	cout << "Creating shared_ptr U..." << endl;
	shared_ptr<Point> U = make_shared<Point>(2.70, -6.1, 0.0);

	cout << "Creating shared_ptr V that points to U..." << endl;
	shared_ptr<Point> V(U);

	cout << "Setting the z-value of V from 0.0 to 12.59..." << endl;
	V->set_z(12.59);

	cout << "Deleting raw pointer P..." << endl;
	delete P;

	cout << "Setting P to nullptr..." << endl;
	P = nullptr;

	cout << "Returning 0..." << endl;
	return 0;
}