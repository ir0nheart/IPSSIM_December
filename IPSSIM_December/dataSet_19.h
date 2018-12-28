#pragma once
#include "DataSet.h"
class dataSet_19 :
	public DataSet
{
public:
	dataSet_19(std::string data_,int npbc_);
	dataSet_19();
	~dataSet_19();
	void parse_data() override;
private:
	int npbc;
	std::vector<int> ipbc;
	std::vector<double> pbc;
	std::vector<double> ubc;
};

