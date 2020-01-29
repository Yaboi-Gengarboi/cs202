//stopwatch_test.cpp
//Justyn P. Durnford
//Created on 1/25/2020
//Last Updated on 1/25/2020
//https://github.com/Yaboi-Gengarboi/cs202/tree/master/Homework%201/Time%20It%20I

#include "StopWatch.hpp"

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::find;
using std::binary_search;
using std::sort;
using std::distance;

#include <random>
using std::random_device;
using std::mt19937;

//Returns true if the given int b is greater than int a
bool compare(const int& a, const int& b)
{
	return (a < b);
}

int main()
{
	//Create random device
	random_device rDevice;

	//Seed the Mersenne Twister
	mt19937 rGenerator(rDevice());

	//StopWatch
	StopWatch watch;

	vector<int> rNums;
	for (int i = 0; i < 5; ++i)
	{
		watch.start();
		for (int p = 0; p < 100000000; ++p)
		{
			rNums.push_back(rGenerator());
		}
		watch.stop();
		cout << watch.seconds_passed() << "s to initialize" << endl;

		watch.start();
		auto it = find(rNums.begin(), rNums.end(), 100000);
		watch.stop();
		if (it != rNums.end())
			cout << distance(rNums.begin(), it) << " : " << rNums[distance(rNums.begin(), it)] << endl;
		else
			cout << "100000 not found" << endl;
		cout << watch.seconds_passed() << "s to find" << endl;

		watch.start();
		sort(rNums.begin(), rNums.end(), compare);
		watch.stop();
		cout << watch.seconds_passed() << "s to sort" << endl;

		watch.start();
		bool found = binary_search(rNums.begin(), rNums.end(), 100000);
		watch.stop();
		if (found)
			cout << watch.seconds_passed() << "s to binary_search did find 100000" << endl;
		else
			cout << watch.seconds_passed() << "s to binary_search did not find 100000" << endl;

		rNums.clear();

		cout << endl;
	}

	return 0;
}