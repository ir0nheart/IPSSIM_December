#include "dataSet_7C.h"
#include <iostream>


dataSet_7C::dataSet_7C(std::string data_)
{
	data = data_;
	name = "Data Set 7C";
	std::cout << "Data Set 7C - is created " << std::endl;
}


dataSet_7C::~dataSet_7C()
{
	std::cout << "Data Set 7C - is destroyed " << std::endl;
}

void dataSet_7C::parse_data()
{
	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	//Remove fortran string char "'" from the string
	while (std::find(data.begin(), data.end(), '\'') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\''), data.end());
	}
	//Split string into a vector by line
	while (std::find(data.begin(), data.end(), '\n') != data.end())
	{
		data.erase(std::remove(data.begin(), data.end(), '\n'), data.end());
	}
	std::vector<std::string> strs = makeStringVector(data);
	csolvu = strs[0];
	itrmxu = std::stoi(strs[1]);
	tolu = std::stod(strs[2]);
}
