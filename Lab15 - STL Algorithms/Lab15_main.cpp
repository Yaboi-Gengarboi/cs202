// Lab15_main.cpp
// Justyn Durnford
// Created on 4/23/2020
// Last updated on 4/23/2020

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <random>
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

#include <algorithm>
using std::count;
using std::for_each;

void testCount()
{
	vector<unsigned int> vec;
	random_device rand_dev;
	default_random_engine rand_engine(rand_dev());
	uniform_int_distribution<unsigned int> uniform_dist(0, 9);

	for (unsigned int i = 0; i < 100; ++i)
		vec.push_back(uniform_dist(rand_engine));

	unsigned int target = 5;
	cout << count(vec.begin(), vec.end(), target) << endl;
}

void testForEach()
{
	vector<unsigned int> vec;
	random_device rand_dev;
	default_random_engine rand_engine(rand_dev());
	uniform_int_distribution<unsigned int> uniform_dist(0, 9);

	for (unsigned int i = 0; i < 10; ++i)
		vec.push_back(uniform_dist(rand_engine));

	auto print = [](const int& n)
	{ 
		cout << n << " "; 
	};

	for_each(vec.begin(), vec.end(), print);
}

int main(int argc, char** argv)
{
	for (unsigned int i = 0; i < 5; ++i)
		testCount();
	for (unsigned int i = 0; i < 5; ++i)
		testForEach();
	return 0;
}