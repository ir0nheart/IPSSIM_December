#pragma once
#include "DataSet.h"
class dataSet_15A :
	public DataSet
{
public:
	dataSet_15A(std::string data_,std::string type);
	~dataSet_15A();
	void parse_data() override;


	double& get_pmaxfa()
	{
		return PMAXFA;
	}

	double& get_pmidfa()
	{
		return PMIDFA;
	}

	double& get_pminfa()
	{
		return PMINFA;
	}

	double& get_ang1_fa()
	{
		return ANG1FA;
	}

	double& get_ang2_fa()
	{
		return ANG2FA;
	}

	double& get_ang3_fa()
	{
		return ANG3FA;
	}

	double& get_almaxf()
	{
		return ALMAXF;
	}

	double& get_almidf()
	{
		return ALMIDF;
	}

	double& get_alminf()
	{
		return ALMINF;
	}

	double& get_atmaxf()
	{
		return ATMAXF;
	}

	double& get_atmidf()
	{
		return ATMIDF;
	}

	double& get_atminf()
	{
		return ATMINF;
	}

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

