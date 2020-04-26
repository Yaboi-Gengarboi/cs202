// TSP_Solver.cpp
// Justyn Durnford
// Created on 4/23/2020
// Last updated on 4/26/2020

#include "TSP_Solver.hpp"
// #include <string>
// #include <vector>

#include <random>
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

TSP_Solver::TSP_Solver() { }

TSP_Solver::~TSP_Solver() { }

CityPath TSP_Solver::solveRandomly(CityList cListCopy) const
{
	CityPath path;

	random_device rand_dev;
	default_random_engine rand_engine(rand_dev());

	uniform_int_distribution<unsigned int> uniform_dist_start(0, cListCopy.cityCount() - 1);
	unsigned int cityID = uniform_dist_start(rand_engine);
	CityNode startCity = cListCopy[cityID];
	path.addCity(startCity);
	cListCopy.removeCity(cityID);

	while (cListCopy.cityCount() > 0)
	{
		uniform_int_distribution<unsigned int> uniform_dist(0, cListCopy.cityCount() - 1);
		cityID = uniform_dist(rand_engine);
		path.addCity(cListCopy[cityID]);
		cListCopy.removeCity(cityID);
	}

	path.addCity(startCity);

	return path;
}

CityPath TSP_Solver::solveGreedy(const CityList& cList) const
{
	CityList unchosen_cities(cList);
	CityPath path;

	return path;
}

double TSP_Solver::calcDistance(const CityList& cList, const CityPath& cPath) const
{
	double distance = 0.0;

	for (unsigned int i = 0; i < cPath.size() - 1; ++i)
		distance += (cList.distance(cPath.getCityID(i), cPath.getCityID(i + 1)));

	return distance;
}