#pragma once
#include "DataSet.h"
class dataSet_17 :
	public DataSet
{
public:
	dataSet_17(std::string data_,int nsop_);
	dataSet_17();
	~dataSet_17();
	void parse_data() override;
private:
	int nsop;
	std::vector<int> iqcp;
	std::vector<double> qinc;
	std::vector<double> uinc;
};

