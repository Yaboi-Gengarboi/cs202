//Tools.hpp
//Justyn Durnford
//Created on 2/25/2020
//Last updated on 2/25/2020
//Contains functions and information of general use
//to be used in other files.
//

#ifndef TOOLS_HPP
#define TOOLS_HPP

#include "Room.hpp"

#include <vector>
#include <string>
#include <fstream>
#include <bitset>

//Opens an ifstream for the given file and determines
//if the file exists using the good() member function.
//RETURNS TRUE IF FILE EXISTS
//RETURNS FALSE OTHERWISE
bool does_file_exist(const char* file_str);



#endif //TOOLS_HPP