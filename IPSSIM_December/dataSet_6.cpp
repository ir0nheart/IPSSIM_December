#include "dataSet_6.h"
#include <iostream>
#include "TimeList.h"
#include "TimeCycle.h"
#include "StepList.h"
#include "StepCycle.h"


dataSet_6::dataSet_6(std::string data_)
{
	name = "Data Set 6";
	data = data_;
	std::cout << "Data Set 6 - is created " << std::endl;
}


dataSet_6::~dataSet_6()
{
	std::cout << "Data Set 6 - is destroyed " << std::endl;
}


void dataSet_6::parse_data()
{
	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	while (std::find(data.begin(), data.end(), '\'') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\''), data.end());
	}
	std::vector<std::string> strs;
	//Split string into a vector by line
	while (std::find(data.begin(), data.end(), '\n') != data.end())
	{
		strs.push_back(data.substr(0, data.find_first_of("\n")));
		data.erase(0, data.find_first_of("\n") + 1);
	}

	if (strs.size()<1)
	{
		// Command Error
	}

	std::vector<std::vector<std::string>> sstrs;

	for (std::string s : strs)
		sstrs.push_back(makeStringVector(s));

	// Check for the ending dash
	if (sstrs[sstrs.size() - 1][0] != "-")
		//Command on Error

	nsch = std::stoi(sstrs[0][0]);
	npcyc = std::stoi(sstrs[0][1]);
	nucyc = std::stoi(sstrs[0][2]);

	for (int i = 0; i < sstrs.size() - 1; i++)
	{
		std::string schtype = sstrs[i][1] + " " + sstrs[i][2];
		if (schtype == "TIME LIST")
		{
			scheduleList.push_back(new TimeList(sstrs[i]));
		} else if (schtype == "TIME CYCLE")
		{
			scheduleList.push_back(new TimeCycle(sstrs[i]));
		} else if (schtype == "STEP LIST")
		{
			scheduleList.push_back(new StepList(sstrs[i]));
		} else if (schtype == "STEP CYCLE")
		{
			scheduleList.push_back(new StepCycle(sstrs[i]));
		} else
		{
			// Command Error
		}
	}

	for (Schedule * sch : scheduleList)
	{
		sch->create_schedule();
	}


}
