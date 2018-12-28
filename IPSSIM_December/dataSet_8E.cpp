#include "dataSet_8E.h"
#include <iostream>


dataSet_8E::dataSet_8E(std::string data_)
{
	data = data_;
	name = "Data Set 8E";
	std::cout << "Data Set 8E - is created " << std::endl;
}


dataSet_8E::~dataSet_8E()
{
	std::cout << "Data Set 8E - is destroyed " << std::endl;
}

void dataSet_8E::parse_data()
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

	//Parse Data Set 8E
	std::vector<std::string> _8e = makeStringVector(strs[0]);
	nbcfpr = std::stoi(_8e[0]);
	nbcspr = std::stoi(_8e[1]);
	nbcppr = std::stoi(_8e[2]);
	nbcupr = std::stoi(_8e[3]);
	cinact = _8e[4];
	//Parse Data Set 9
	std::vector<std::string> _9 = makeStringVector(strs[1]);
	compfl = std::stod(_9[0]);
	cw = std::stod(_9[1]);
	sigmaw = std::stod(_9[2]);
	rhow0 = std::stod(_9[3]);
	urhow0 = std::stod(_9[4]);
	drwdu = std::stod(_9[5]);
	visc0 = std::stod(_9[6]);

	//Parse Data Set 10
	std::vector<std::string> _10 = makeStringVector(strs[2]);
	compma = std::stod(_10[0]);
	cs = std::stod(_10[1]);
	sigmas = std::stod(_10[2]);
	rhos = std::stod(_10[3]);
	//Parse Data Set 11
	std::vector<std::string> _11 = makeStringVector(strs[3]);
	adsmod = _11[0];
	if (adsmod == "NONE")
	{
		chi1 = chi2 = 0.0;
	} else
	{
		chi1 = std::stod(_11[1]);
		chi2 = std::stod(_11[2]);
	}


}
