#include "dataSet_12.h"
#include <iostream>
#include <locale>

dataSet_12::dataSet_12(std::string data_)
{
	name = "Data Set 12";
	data = data_;
	std::cout << "Data Set 12 - is created " << std::endl;
}


dataSet_12::~dataSet_12()
{
	std::cout << "Data Set 12 - is destroyed " << std::endl;
}

void dataSet_12::parse_data()
{
	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	//Remove fortran string char "'" from the string
	while (std::find(data.begin(), data.end(), '\'') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\''), data.end());
	}
	std::vector<std::string> strs;
	//Split string into a vector by line
	while (std::find(data.begin(), data.end(), '\n') != data.end())
	{
		strs.push_back(data.substr(0, data.find_first_of("\n")));
		data.erase(0, data.find_first_of("\n") + 1);
	}

	//Data Set 12
	std::vector<std::string> _12 = makeStringVector(strs[0]);
	prodf0 = std::stod(_12[0]);
	prods0 = std::stod(_12[1]);
	prodf1 = std::stod(_12[2]);
	prods1 = std::stod(_12[3]);
	//Data Set 13
	std::vector<std::string> _13 = makeStringVector(strs[1]);
	gravx = std::stod(_13[0]);
	gravy = std::stod(_13[1]);
	if (!std::isalpha(_13[2][0], std::locale()))
		gravz = std::stod(_13[2]);
	else
		gravz = 0;

	//Data Set 14A
	std::vector<std::string> _14a = makeStringVector(strs[2]);
	if (_14a[0] == "NODE"){
		scalx = std::stod(_14a[1]);
		scaly = std::stod(_14a[2]);
		scalz = std::stod(_14a[3]);
		porfac = std::stod(_14a[4]);
	} else
	{
		//Command Error
	}
}
