#pragma once
#include "Schedule.h"
#include <vector>

class StepList :
	public Schedule
{
public:
	StepList(std::vector<std::string> data_);
	~StepList();
	void create_schedule() override;
private:
	int nslist;
	std::vector<int> islist;
};

