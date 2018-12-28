#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class DataSet
{
public:
	DataSet();
	~DataSet();
	std::vector<std::string> makeStringVector(std::string s);

	virtual void parse_data() = 0;
protected:
	std::string name;
	std::string data;
};

