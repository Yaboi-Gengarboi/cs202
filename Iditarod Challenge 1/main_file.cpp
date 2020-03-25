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

int main()
{
	return 0;
}