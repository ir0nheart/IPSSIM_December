#pragma once
#include "DataSet.h"
#include "Observation.h"

class dataSet_8D :
	public DataSet
{
public:
	dataSet_8D(std::string data_);
	~dataSet_8D();
	void parse_data() override;
private:
	int noblin;
	std::vector<Observation*> obsList;

};

