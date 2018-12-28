#pragma once
#include "Schedule.h"
class TimeCycle :
	public Schedule
{
public:
	TimeCycle(std::vector<std::string> data_);
	~TimeCycle();
	void create_schedule() override;
private:
	std::string creft;
	double scalt;
	int ntmax;
	double timei;
	double timel;
	double timec;
	int ntcyc;
	double tcmult;
	double tcmin;
	double tcmax;
};

