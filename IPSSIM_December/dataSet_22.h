#pragma once
#include "DataSet.h"
class dataSet_22 :
	public DataSet
{
public:
	dataSet_22(std::string data_,std::string type_, int nels_);
	~dataSet_22();
	void parse_data() override;
private:
	std::vector<int> incidence;
	std::string type;
	int nels;
};

