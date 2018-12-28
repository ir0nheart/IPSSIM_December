#pragma once
#include "DataSet.h"
class dataSet_18 :
	public DataSet
{
public:
	dataSet_18(std::string data_,int nsou_);
	dataSet_18();
	~dataSet_18();
	void parse_data() override;
private:
	int nsou;
	std::vector<int> iqcu;
	std::vector<double> quinc;
};

