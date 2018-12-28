#pragma once
#include "Schedule.h"
class StepCycle :
	public Schedule
{
public:
	StepCycle(std::vector<std::string> data_);
	~StepCycle();
	void create_schedule() override;
private:
	int nsmax;
	int istepi;
	int istepl;
	int istepc;
};

