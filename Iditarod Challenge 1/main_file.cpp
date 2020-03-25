// main_file.cpp
// Justyn Durnford
// Created on 3/24/2020
// Last updated on 3/24/2020

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
    static int f0 = 0;
    static int f1 = 1;
    static int f;

    if (n > 0)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        fibonacci(n - 1);
    }

    return f;
}

int main()
{
	return 0;
}