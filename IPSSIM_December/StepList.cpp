#include "StepList.h"


StepList::StepList(std::vector<std::string> data_)
{
	data = data_;
	name = data[0];
	type = data[1] + " " + data[2];
}


StepList::~StepList()
{
}

void StepList::create_schedule()
{
	nslist = std::stoi(data[3]);
	islist.assign(nslist, 0);
	for (int i = 0; i < nslist; i++)
		islist[i] = std::stod(data[4 + i]);
}
