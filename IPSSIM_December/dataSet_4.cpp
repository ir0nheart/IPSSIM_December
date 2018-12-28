#include "dataSet_4.h"
#include <iostream>


dataSet_4::dataSet_4(std::string data_)
{
	name = "Data Set 4";
	data = data_;
	std::cout << "Data Set 4 - is created " << std::endl;
}


dataSet_4::~dataSet_4()
{
	std::cout << "Data Set 4 - is destroyed " << std::endl;
}

void dataSet_4::parse_data()
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
	cunsat = strs[0];
	cssflo = strs[1];
	csstra = strs[3];
	cread = strs[5];
	istore = std::stoi(strs[6]);
}
