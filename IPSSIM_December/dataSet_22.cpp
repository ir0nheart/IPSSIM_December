#include "dataSet_22.h"
#include <iostream>


dataSet_22::dataSet_22(std::string data_, std::string type_, int nels_)
{
	name = "Data Set 22";
	data = data_;
	nels = nels_;
	type = type_;
	std::cout << "Data Set 22 - is created " << std::endl;
}


dataSet_22::~dataSet_22()
{
	std::cout << "Data Set 22 - is destroyed " << std::endl;
}

void dataSet_22::parse_data()
{
	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	//Remove fortran string char "'" from the string
	while (std::find(data.begin(), data.end(), '\'') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\''), data.end());
	}

	//Get the first line
	std::string tmp = data.substr(0, data.find_first_of("\n"));
	data.erase(0, data.find_first_of("\n") + 1);
	//Split string into a vector by line


	while (std::find(data.begin(), data.end(), '\n') != data.end())
	{
		data.erase(std::remove(data.begin(), data.end(), '\n'), data.end());
	}

	std::vector<char>  line;
	int size = 0;
	if (type == "3D")
		size = 8 * nels + nels;
	else
		size = 4 * nels + nels;
	incidence.reserve(size);

	line.assign(data.begin(), data.end());
	if (tmp == "INCIDENCE")
	{
		incidence.push_back(std::stoi(strtok(line.data(), " ")));
		for (int i = 1; i < size;i++)
		incidence.push_back(std::stoi(strtok(NULL, " ")));
	}


}
