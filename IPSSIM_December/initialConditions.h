#pragma once
#include <string>
#include <algorithm>
#include <vector>
#include <deque>

class initialConditions
{
public:
	initialConditions(std::string data_,int nn_);
	~initialConditions();

	int& get_itrst()
	{
		return ITRST;
	}

	std::vector<double>& get_ics_pvec()
	{
		return ics_PVEC;
	}

	std::vector<double>& get_ics_uvec()
	{
		return ics_UVEC;
	}

	void parse_data();
private:
	std::string data;
	std::vector<std::vector<char>> strs;
	int nnodes;
	int ITRST;
	std::vector<double> ics_PVEC;
	std::vector<double> ics_UVEC;
	std::string pressure_str;
	std::string conc_temp_str;
};

