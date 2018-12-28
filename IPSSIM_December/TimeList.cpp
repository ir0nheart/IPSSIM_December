#include "TimeList.h"


TimeList::TimeList(std::vector<std::string> data_)
{
	data = data_;
	name = data[0];
	type = data[1] + " " + data[2];
}


TimeList::~TimeList()
{
}

void TimeList::create_schedule()
{
	creft = data[3];
	scalt = std::stod(data[4]);
	ntlist = std::stoi(data[5]);
	tlist.assign(ntlist, 0);
	for (int i = 0; i < ntlist; i++)
	{
		tlist[i] = std::stoi(data[6 + i]);
	}
}
