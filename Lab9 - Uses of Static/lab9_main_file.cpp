// lab9_main_file.cpp
// Justyn Durnford
// Created on 3/31/2020
// Last updated on 3/31/2020
// Demonstrates the use of the static keyword

#include <iostream>
using std::cout;
const char nl = '\n';

// A static variable has a lifetime of the entire program.
// This allows it to retain a value and use it in subsequent
// function calls.
int foo()
{
	static int x = 125964;
	x *= 3;
	x ^= x << 16;
	x -= 60305;
	x ^= x >> 5;
	return x;
}

// A static member variable of a class is shared by every 
// object of the class.
class Test
{
	static int s;

	public:

	Test() {}

	~Test() {}

	int getS() const
	{
		return s;
	}

	// A static member function can be called without an
	// object of the class, but it can only access static
	// member variables.
	static void bar()
	{
		s = foo();
	}
};

int Test::s = 0;

int main()
{
	for (int i = 0; i < 10; ++i)
		cout << foo() << nl;

	Test t;
	cout << t.getS() << nl;

	Test::bar();
	Test s;
	cout << s.getS() << nl;
	cout << t.getS() << nl;

	return 0;
}