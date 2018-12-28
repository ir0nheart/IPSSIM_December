#pragma once
#include "DataSet.h"
class dataSet_12 :
	public DataSet
{
public:
	dataSet_12(std::string data_);
	~dataSet_12();
	void parse_data() override;
private:
	//Data Set 12
	double prodf0;
	double prods0;
	double prodf1;
	double prods1;
	// Data Set 13
	double gravx;
	double gravy;
	double gravz;
	// Data Set 14A
	double scalx;
	double scaly;
	double scalz;
	double porfac;
};

