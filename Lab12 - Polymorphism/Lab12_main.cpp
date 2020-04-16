// Lab12_main.cpp
// Justyn Durnford
// Created on 4/14/2020
// Last updated on 4/15/2020

#include <iostream>
using std::cout;

#include <memory>
using std::unique_ptr;

class BaseClass
{
	public:

	BaseClass()
	{
		cout << "BaseClass constructor called.\n\n";
	}

	virtual ~BaseClass()
	{
		cout << "BaseClass destructor called.\n\n";
	}

	void function1() const
	{
		cout << "Non-virtual BaseClass function function1 called.\n\n";
	}

	virtual void function2() const
	{
		cout << "Virtual BaseClass function function2 called.\n\n";
	}
};

class SubClass : public BaseClass
{
	public:


	SubClass()
	{
		cout << "SubClass constructor called.\n\n";
	}

	~SubClass()
	{
		cout << "SubClass destructor called.\n\n";
	}

	void function1() const
	{
		cout << "Non-virtual SubClass function function1 called.\n\n";
	}

	virtual void function2() const
	{
		cout << "Virtual SubClass function function2 called.\n\n";
	}
};

int main(int argc, char** argv)
{
	BaseClass b0;
	SubClass s0;

	BaseClass* b0bp = &b0;
	BaseClass* s0bp = &s0;

	b0bp->function1();
	b0bp->function2();

	s0bp->function1();
	s0bp->function2();

	SubClass* s0sp = &s0;

	s0sp->function1();
	s0sp->function2();
	
	BaseClass& b0br = b0;
	BaseClass& s0br = s0;

	b0br.function1();
	b0br.function2();

	s0br.function1();
	s0br.function2();

	SubClass& s0sr = s0;

	s0sr.function1();
	s0sr.function2();

	return 0;
}