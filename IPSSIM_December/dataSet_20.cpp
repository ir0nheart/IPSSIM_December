#include "dataSet_20.h"
#include <iostream>
#include "Timer.h"


dataSet_20::dataSet_20(std::string data_, int nubc_)
{
	name = "Data Set 20";
	data = data_;
	nubc = nubc_;
	std::cout << "Data Set 20 - is created " << std::endl;
	iubc.reserve(nubc);
	ubc.reserve(nubc);
	iubc.assign(nubc, 0);
	ubc.assign(nubc, 0);
}


dataSet_20::~dataSet_20()
{
	std::cout << "Data Set 20 - is destroyed " << std::endl;
}

void dataSet_20::parse_data()
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
			iubc[j] = std::stoi(strtok(line.data(), " "));
			ubc[j] = std::stod(strtok(NULL, " "));
			str_start = &data[i + 1];
			if (j == nubc - 1)
				break;
			j++;
			
		}
	}

	std::cout << t << " seconds" << std::endl;
}

dataSet_20::dataSet_20()
{
}
