#include "dataSet_7B.h"
#include <iostream>


dataSet_7B::dataSet_7B(std::string data_)
{
	data = data_;
	name = "Data Set 7B";
	std::cout << "Data Set 7B - is created " << std::endl;
}


dataSet_7B::~dataSet_7B()
{
	std::cout << "Data Set 7B - is destroyed " << std::endl;
}

void dataSet_7B::parse_data()
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

	csolvp = strs[0];
	itrmxp = std::stoi(strs[1]);
	tolp = std::stod(strs[2]);
}
