#include "dataSet_7A.h"
#include <iostream>


dataSet_7A::dataSet_7A(std::string data_)
{
	data = data_;
	name = "Data Set 7A";
	std::cout << "Data Set 7A - is created " << std::endl;
}


dataSet_7A::~dataSet_7A()
{
	std::cout << "Data Set 7A - is destroyed " << std::endl;
}

void dataSet_7A::parse_data()
{
	std::vector<std::string> strs = makeStringVector(data);
	itrmax = std::stoi(strs[0]);
	rpmax = 0.0;
	rumax = 0.0;
}
