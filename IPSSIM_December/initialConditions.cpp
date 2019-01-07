#include "initialConditions.h"
#include "Timer.h"


initialConditions::initialConditions(std::string data_, int nn_) :data(data_),nnodes(nn_)
{
}


initialConditions::~initialConditions()
{
}

void initialConditions::parse_data()
{

	ics_PVEC.assign(nnodes, 0);
	ics_UVEC.assign(nnodes, 0);

	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	//Remove fortran string char "'" from the string
	while (std::find(data.begin(), data.end(), '\'') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\''), data.end());
	}
	int it = 0;
	int lines;
	while (data[it] != '\0')
	{
		if (data[it] == '\n')
			lines++;
		it++;
	}

	strs.reserve(lines);
	char * str_start = &data[0];
	char * str_end;
	std::vector<char>  line;


	int j = 0;
	Timer t;
	for (int i = 0; i < data.length(); i++){
		if (data[i] == '\n'){
			str_end = &data[i - 1];
			line.assign(str_start, str_end);
			strs.push_back(line);
			j++;
			str_start = &data[i + 1];
		}
	}

	
	//Read pressure str
	pressure_str = std::string(strs[2].begin(),strs[2].end());
	//
	int contIndx = 0;
	if (pressure_str == "UNIFORM")
	{
		//Read uniform pressure
		double uniP = std::stod(strs[3].data());
		ics_PVEC.assign(nnodes, uniP);
		contIndx = 4;
	} else
	{
		for (int i = 0; i < nnodes; i++)
		{
			ics_PVEC[i] = std::stod(strs[3+i].data());
		}
		contIndx = 3 + nnodes;
	}

	contIndx += 1;
	//Read conc or temp str
	conc_temp_str = std::string(strs[contIndx].begin(), strs[contIndx].end());
	if (conc_temp_str == "UNIFORM")
	{
		//Read uniform pressure
		double uniU = std::stod(strs[contIndx+1].data());
		ics_UVEC.assign(nnodes, uniU);
	
	}
	else
	{
		for (int i = 0; i < nnodes; i++)
		{
			ics_UVEC[i] = std::stod(strs[contIndx+1 + i].data());
		}
	}



}
