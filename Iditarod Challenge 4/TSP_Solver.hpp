// TSP_Solver.hpp
// Justyn Durnford
// Created on 4/20/2020
// Last updated on 4/25/2020

#ifndef TSP_SOLVER_HPP
#define TSP_SOLVER_HPP

#include "CityList.hpp"
#include "CityPath.hpp"
// #include <vector>

class TSP_Solver
{
	public:

	TSP_Solver();

	~TSP_Solver();

	CityPath solveRandomly(const CityList& cList) const;

	CityPath solveGreedy(const CityList& cList) const;
};

#endif // TSP_SOLVER_HPP