//Ackermann's Function.cpp
//Justyn Durnford
//Created on 3/9/2020
//Last updated on 3/9/2020

#include <iostream>
using std::cout;
using std::endl;

/*
			  { n + 1 }                 if (m == 0)
	A(m, n) = { A(m - 1, 1) }           if (m > 0 && n == 0)
			  { A(m - 1, A(m, n - 1)) } if (m > 0 && n > 0)
*/

int ackermann(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}

	if (m > 0 && n == 0)
	{
		return ackermann(m - 1, 1);
	}

	if (m > 0 && n > 0)
	{
		return ackermann(m - 1, ackermann(m, n - 1));
	}
}

int main()
{
	return 0;
}