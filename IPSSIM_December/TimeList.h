#pragma once
#include "Schedule.h"
#include <vector>

class TimeList :
	public Schedule
{
public:
	TimeList(std::vector<std::string> data_);
	~TimeList();
	void create_schedule() override;
private:
	std::string creft;
	double scalt;
	int ntlist;
	std::vector<double> tlist;
};

