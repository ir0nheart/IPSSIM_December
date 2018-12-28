#pragma once
#include "DataSet.h"
#include <fstream>
class dataSet_14B :
	public DataSet
{
public:
	dataSet_14B(std::string data_,int nnodes_,std::string type_);
	~dataSet_14B();
	void parse_data() override;
private:
	int nnodes;
	std::string type;
	std::vector<int> ii;
	std::vector<int> nreg;
	std::vector<double> x;
	std::vector<double> y;
	std::vector<double> z;
	std::vector<double> por;

	/*int * ii;
	int * nreg;
	double * x;
	double * y;
	double * z;
	double * por;*/
};

