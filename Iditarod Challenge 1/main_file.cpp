// main_file.cpp
// Justyn Durnford
// Created on 3/24/2020
// Last updated on 3/25/2020

#include <iostream>
using std::cout;

int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int factorial_loop(int n)
{
    int f = 1;

    for (int i = n; i > 1; --i)
        f *= i;

    return f;
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacci_loop(int n)
{
    int f0 = 0;
    int f1 = 1;
    int f = 0;

    if (n <= 1)
        return n;

    for (int i = 1; i < n; ++i)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }

    return f;
}

int main()
{
    for (int i = 1; i <= 8; ++i)
        cout << '!' << i << " = " << factorial(i) << '\n';

    for (int i = 1; i <= 8; ++i)
        cout << '!' << i << " = " << factorial_loop(i) << '\n';

    for (int i = 1; i <= 8; ++i)
        cout << "fibonacci(" << i << ") = " << fibonacci(i) << '\n';

    for (int i = 1; i <= 8; ++i)
        cout << "fibonacci(" << i << ") = " << fibonacci_loop(i) << '\n';

	return 0;
}