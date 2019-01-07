#include "dataSet_17.h"
#include <iostream>
#include "Timer.h"


dataSet_17::dataSet_17(std::string data_,int nsop_)
{
	name = "Data Set 17";
	data = data_;
	nsop = nsop_;
	std::cout << "Data Set 17 - is created " << std::endl;
	iqcp.reserve(nsop);
	qinc.reserve(nsop);
	uinc.reserve(nsop);
	iqcp.assign(nsop, 0);
	qinc.assign(nsop, 0);
	uinc.assign(nsop, 0);
}


dataSet_17::~dataSet_17()
{
	std::cout << "Data Set 17 - is destroyed " << std::endl;
}

void dataSet_17::parse_data()
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
			iqcp[j] = std::stoi(strtok(line.data(), " "));
			qinc[j] = std::stod(strtok(NULL, " "));
			uinc[j] = std::stod(strtok(NULL, " "));
			str_start = &data[i + 1];
	
			if (j == nsop - 1)
				break;
			j++;
		}
	}

	std::cout << t << " seconds" << std::endl;
}

dataSet_17::dataSet_17()
{
}
