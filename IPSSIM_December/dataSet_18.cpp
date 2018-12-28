#include "dataSet_18.h"
#include <iostream>
#include "Timer.h"


dataSet_18::dataSet_18(std::string data_,int nsou_)
{
	name = "Data Set 18";
	data = data_;
	nsou = nsou_;
	std::cout << "Data Set 18 - is created " << std::endl;
	iqcu.reserve(nsou);
	quinc.reserve(nsou);
	
	iqcu.assign(nsou, 0);
	quinc.assign(nsou, 0);
	
}


dataSet_18::~dataSet_18()
{
	std::cout << "Data Set 18 - is destroyed " << std::endl;
}

void dataSet_18::parse_data()
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
			iqcu[j] = std::stoi(strtok(line.data(), " "));
			quinc[j] = std::stod(strtok(NULL, " "));
		
			j++;
			if (j == nsou - 1)
				break;
			str_start = &data[i + 1];
		}
	}

	std::cout << t << " seconds" << std::endl;
}

dataSet_18::dataSet_18()
{
}
