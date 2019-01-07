#pragma once
#include "DataSet.h"
class dataSet_20 :
	public DataSet
{
public:
	dataSet_20(std::string data_,int nubc_);
	dataSet_20();
	~dataSet_20();
	void parse_data() override;
private:
	int nubc;
	std::vector<int> iubc;
	std::vector<double> ubc;
};

