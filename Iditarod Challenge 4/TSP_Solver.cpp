// TSP_Solver.cpp
// Justyn Durnford
// Created on 4/23/2020
// Last updated on 4/25/2020

#include "TSP_Solver.hpp"
// #include <string>
// #include <vector>

#include <random>
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

TSP_Solver::TSP_Solver() { }

TSP_Solver::~TSP_Solver() { }

CityPath TSP_Solver::solveRandomly(const CityList& cList) const
{
	CityList unchosen_cities(cList);
	CityPath path;

	random_device rand_dev;
	default_random_engine rand_engine(rand_dev());

	while (unchosen_cities.cityCount() > 0)
	{
		uniform_int_distribution<unsigned int> uniform_dist(0, cList.cityCount());
		unsigned int cityID = uniform_dist(rand_engine);
		path.addCity(unchosen_cities[cityID]);
		unchosen_cities.removeCity(cityID);
	}

	path.addCity(cList[path.getCityID(0)]);

	return path;
}

CityPath TSP_Solver::solveGreedy(const CityList& cList) const
{
	CityList unchosen_cities(cList);
	CityPath path;

	return path;
}