#pragma once
#include "DataSet.h"
class dataSet_15B :
	public DataSet
{
public:
	dataSet_15B(std::string data_,std::string type,int nels_);
	~dataSet_15B();
	void parse_data() override;
private:
	void allocate();
	std::string type;
	int nels;
	std::vector<int> L;
	std::vector<int> Lreg;
	std::vector<double> pmax;
	std::vector<double> pmid;
	std::vector<double> pmin;
	std::vector<double> angle1;
	std::vector<double> angle2;
	std::vector<double> angle3;
	std::vector<double> almax;
	std::vector<double> almid;
	std::vector<double> almin;
	std::vector<double> atmax;
	std::vector<double> atmid;
	std::vector<double> atmin;
};

