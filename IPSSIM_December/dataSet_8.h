#pragma once
#include "DataSet.h"

class dataSet_8 :
	public DataSet
{
public:
	dataSet_8(std::string data_);
	~dataSet_8();
	void parse_data() override;
private:
	int nprint;
	std::string cnodal;
	std::string celmnt;
	std::string cincid;
	std::string cpands;
	std::string cvel;
	std::string ccort;
	std::string cbudg;
	std::string cscrn;
	std::string cpause;

	int ncolpr;
	std::vector<std::string> ncol;

	int lcolpr;
	std::vector<std::string> lcol;


};

