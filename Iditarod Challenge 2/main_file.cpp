// main_file.cpp
// Justyn Durnford
// Created on 3/30/2020
// Last updated on 3/31/2020

/* Function: ackermann
   Return type: long long
   Parameters: int m, int n
   Returns the result of the Ackermann Function of m and n,
   defined as:

			  { n + 1 }                 if (m == 0)
	A(m, n) = { A(m - 1, 1) }           if (m > 0 && n == 0)
			  { A(m - 1, A(m, n - 1)) } if (m > 0 && n > 0)

   This function grows extremely quickly with increasing m
   and an m value greater than 3 will cause a stack overflow.
   This function only accepts non-negative integers as
   parameters. Any non-negative input will return -1.

   Note: A more efficient version is possible with the use
   of boost's big integer type.
*/
long long ackermann(int m, int n)
{
	if (m == 0 && n > 0)
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

	return -1;
}

int main()
{
	return 0;
}