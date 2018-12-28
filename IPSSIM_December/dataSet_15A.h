#pragma once
#include "DataSet.h"
class dataSet_15A :
	public DataSet
{
public:
	dataSet_15A(std::string data_,std::string type);
	~dataSet_15A();
	void parse_data() override;
private:
	std::string type;

	double PMAXFA;
	double PMIDFA;
	double PMINFA;
	double ANG1FA;
	double ANG2FA;
	double ANG3FA;
	double ALMAXF;
	double ALMIDF;
	double ALMINF;
	double ATMAXF;
	double ATMIDF;
	double ATMINF;
};

