/* Fibonacci Sequence.cpp
   Justyn Durnford
   Created on 3/9/2020
   Last Updated on 3/9/2020
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Allows debug features of the functions to be shown.
bool __debug__ = true;

/* Function: fibonacci
   Return type: int
   Parameter: int n

   Returns the nth number of the fibonacci sequence, defined as:
   f(n) = f(n - 1) f(n-2)
   Where f(0) = 0 and f(1) = 1
*/
int fibonacci(int n)
{
    static int f0 = 0;
    static int f1 = 1;
    static int f;

    if (n > 0)
    {
        f = f0 + f1;

        if (__debug__)
            cout << f0 << " + " << f1 << " = " << f << endl;

        f0 = f1;
        f1 = f;

        fibonacci(n - 1);
    }

    return f;
}

/* Function: fibonacci_loop
   Return type: int
   Parameter: int n

   Returns the nth number of the fibonacci sequence, defined as:
   f(n) = f(n - 1) f(n-2)
   Where f(0) = 0 and f(1) = 1

   Unlike finonacci(), this function does not use recursion.
*/
int fibonacci_loop(int n)
{
    static int f0 = 0;
    static int f1 = 1;
    static int f;

    if (n == 0)
        return 0;
    
    if (n == 1)
        return 1;

    while (n > 0)
    {
        f = f0 + f1;

        if (__debug__)
            cout << f0 << " + " << f1 << " = " << f << endl;

        f0 = f1;
        f1 = f;

        --n;
    }

    return f;
}

int main()
{
    int f = fibonacci(5);

    cout << endl;

    int g = fibonacci_loop(5);

    return 0;
}