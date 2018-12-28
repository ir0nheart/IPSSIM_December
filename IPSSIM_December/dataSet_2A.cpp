#include "dataSet_2A.h"
#include <iostream>
#include <vector>


dataSet_2A::dataSet_2A(std::string data_)
{
	name = "Data Set 2";
	data = data_;
	std::cout << "Data Set 2 - is created " << std::endl;
}


dataSet_2A::~dataSet_2A()
{
	std::cout << "Data Set 2 - is destroyed " << std::endl;
}

void dataSet_2A::parse_data()
{
	std::vector<std::string> strs;
	strs = makeStringVector(data);
	if (strs.size() == 5){
		strs[0].erase(std::remove(strs[0].begin(), strs[0].end(), '\''), strs[0].end());
		strs[4].erase(std::remove(strs[4].begin(), strs[4].end(), '\''), strs[4].end());
		simName = strs[0];
		versionStr = strs[1] + " " + strs[2];
		simTypeStr = strs[3];
		transportStr = strs[4];
	} else
	{
		//Error Command
	}
}
