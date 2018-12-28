#include "dataSet_5.h"
#include <iostream>


dataSet_5::dataSet_5(std::string data_)
{
	name = "Data Set 5";
	data = data_;
	std::cout << "Data Set 5 - is created " << std::endl;
}


dataSet_5::~dataSet_5()
{
	std::cout << "Data Set 5 - is destroyed " << std::endl;
}

void dataSet_5::parse_data()
{
	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	while (std::find(data.begin(), data.end(), '\n') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\n'), data.end());
	}

	std::vector<std::string> strs = makeStringVector(data);
	if (strs.size() == 3){
		UP = std::stod(strs[0]);
		GNUP = std::stod(strs[1]);
		GNUU = std::stod(strs[2]);
	} else
	{
		//Command Error
	}
}
