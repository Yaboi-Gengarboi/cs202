//Catch2Lab_main.cpp
//Justyn P. Durnford
//Created on 1/30/2020
//Last Updated on 1/30/2020
//https://github.com/Yaboi-Gengarboi/cs202/blob/master/Catch2%20Lab/Catch2Lab_main.cpp

//External Libraries
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

//User created headers
#include "Vector.hpp"

TEST_CASE("Vector Tests")
{
	//Testing default constructor
	Vector vec1;
	REQUIRE(vec1.get_x() == 0);
	REQUIRE(vec1.get_y() == 0);
	REQUIRE(vec1.get_z() == 0);

	//Testing primary constructor
	Vector vec2(2.07, 5.43, 8.19);
	REQUIRE(vec2.get_x() != 0);
	REQUIRE(vec2.get_y() != 0);
	REQUIRE(vec2.get_z() != 0);

	//Testing copy constructor
	Vector vec3 = vec2.copy();
	REQUIRE(vec3.get_x() == vec2.get_x());
	REQUIRE(vec3.get_y() == vec2.get_y());
	REQUIRE(vec3.get_z() == vec2.get_z());

	//Testing equality and inequality operators
	REQUIRE(vec3 == vec2);
	REQUIRE(vec3 != vec1);
}