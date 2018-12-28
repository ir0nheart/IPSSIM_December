#include "DataSet.h"


DataSet::DataSet()
{
}


DataSet::~DataSet()
{
}

std::vector<std::string> DataSet::makeStringVector(std::string s)
{
	std::istringstream ss(s);
	std::vector<std::string> results(std::istream_iterator<std::string>{ss},
		std::istream_iterator<std::string>());
	return results;
}