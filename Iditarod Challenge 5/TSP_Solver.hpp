// TSP_Solver.hpp
// Justyn Durnford
// Created on 4/20/2020
// Last updated on 4/29/2020

#ifndef TSP_SOLVER_HPP
#define TSP_SOLVER_HPP

#include "CityList.hpp"
#include "CityPath.hpp"

// #include <string>
// #include <vector>

class TSP_Solver
{
	public:

	TSP_Solver();

	~TSP_Solver();

	CityPath solveRandomly(CityList cListCopy) const;

	double calcDistance(const CityList& cList, const CityPath& cPath) const;
};

#endif // TSP_SOLVER_HPP