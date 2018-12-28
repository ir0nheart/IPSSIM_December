#pragma once
#include <string>
#include <vector>

class Schedule
{
public:
	Schedule();
	~Schedule();
	virtual void create_schedule() = 0;
protected:
	std::string name;
	std::string type;
	std::vector<std::string> data;
};

