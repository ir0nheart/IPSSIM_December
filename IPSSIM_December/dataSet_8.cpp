#include "dataSet_8.h"
#include <iostream>


dataSet_8::dataSet_8(std::string data_)
{
	name = "Data Set 8";
	data = data_;
	std::cout << "Data Set 8 - is created " << std::endl;
}


dataSet_8::~dataSet_8()
{
	std::cout << "Data Set 8 - is destroyed " << std::endl;
}

void dataSet_8::parse_data()
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

	//Parse Data Set 8A
	std::vector<std::string> _8a = makeStringVector(strs[0]);
	nprint = std::stoi(_8a[0]);
	cnodal = _8a[1];
	celmnt = _8a[2];
	cincid = _8a[3];
	cpands = _8a[4];
	cvel = _8a[5];
	ccort = _8a[6];
	cbudg = _8a[7];
	cscrn = _8a[8];
	cpause = _8a[9];
	//Parse Data Set 8B
	std::vector<std::string> _8b = makeStringVector(strs[1]);
	ncolpr = std::stoi(_8b[0]);
	for (int i = 1; i < _8b.size(); i++){
		ncol.push_back(_8b[i]);
		if (_8b[i] == "-")
			break;
	}
	//Parse Data Set 8C
	std::vector<std::string> _8c = makeStringVector(strs[2]);
	lcolpr = std::stoi(_8c[0]);
	for (int i = 1; i < _8c.size(); i++){
		lcol.push_back(_8c[i]);
		if (_8c[i] == "-")
			break;
	}

}
