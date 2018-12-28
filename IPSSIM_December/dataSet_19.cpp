#include "dataSet_19.h"
#include <iostream>
#include "Timer.h"


dataSet_19::dataSet_19(std::string data_,int npbc_)
{
	name = "Data Set 19";
	data = data_;
	npbc = npbc_;
	std::cout << "Data Set 19 - is created " << std::endl;
	ipbc.reserve(npbc);
	pbc.reserve(npbc);
	ubc.reserve(npbc);
	ipbc.assign(npbc, 0);
	pbc.assign(npbc, 0);
	ubc.assign(npbc, 0);
}


dataSet_19::~dataSet_19()
{
	std::cout << "Data Set 19 - is destroyed " << std::endl;
}

void dataSet_19::parse_data()
{
	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	//Remove fortran string char "'" from the string
	while (std::find(data.begin(), data.end(), '\'') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\''), data.end());
	}

	char * str_start = &data[0];
	char * str_end;
	std::vector<char>  line;
	int j = 0;
	Timer t;
	for (int i = 0; i < data.length(); i++){
		if (data[i] == '\n'){
			str_end = &data[i - 1];
			line.assign(str_start, str_end);
			ipbc[j] = std::stoi(strtok(line.data(), " "));
			pbc[j] = std::stod(strtok(NULL, " "));
			ubc[j] = std::stod(strtok(NULL, " "));
			j++;
			if (j == npbc - 1)
				break;
			str_start = &data[i + 1];
		}
	}

	std::cout << t << " seconds" << std::endl;
}

dataSet_19::dataSet_19()
{
}
