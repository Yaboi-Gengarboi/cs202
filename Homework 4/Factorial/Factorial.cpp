/* Factorial.cpp
   Justyn Durnford
   Created on 3/9/2020
   Last updated on 3/9/2020
*/

#include <iostream>
using std::cout;
using std::endl;

/* Function: factorial
   Return type: int
   Parameter: int n

   Returns the factorial of n, defined as:
   product{i = n; i >= 1}( i )

   Note: It is generally assumed that !0 is 1.
   Note: This function will return 1 for negative n.
*/
int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

/* Function: factorial_loop
   Return type: int
   Parameter: int n

   Returns the factorial of n, defined as:
   product{i = n; i >= 1}( i )

   Unlike factorial(), this function does not use recursion.

   Note: It is generally assumed that !0 is 1.
   Note: This function will return 1 for negative n.
*/
int factorial_loop(int n)
{
    int f = 1;

    for (int i = n; i > 1; --i)
        f *= i;

    return f;
}

int main()
{
    cout << "!5 = 5 * 4 * 3 * 2 * 1 = " << factorial(5) << endl;

    cout << endl;

    cout << "!5 = 5 * 4 * 3 * 2 * 1 = " << factorial_loop(5) << endl;

    return 0;
}