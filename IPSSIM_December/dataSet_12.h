#pragma once
#include "DataSet.h"
class dataSet_12 :
	public DataSet
{
public:
	dataSet_12(std::string data_);
	~dataSet_12();
	void parse_data() override;


	double& get_prodf0()
	{
		return prodf0;
	}

	double& get_prods0()
	{
		return prods0;
	}

	double& get_prodf1()
	{
		return prodf1;
	}

	double& get_prods1()
	{
		return prods1;
	}

	double& get_gravx()
	{
		return gravx;
	}

	double& get_gravy()
	{
		return gravy;
	}

	double& get_gravz()
	{
		return gravz;
	}

	double& get_scalx()
	{
		return scalx;
	}

	double& get_scaly()
	{
		return scaly;
	}

	double& get_scalz()
	{
		return scalz;
	}

	double& get_porfac()
	{
		return porfac;
	}

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

