#pragma once
#include "DataSet.h"
class dataSet_15B :
	public DataSet
{
public:
	dataSet_15B(std::string data_,std::string type,int nels_);
	~dataSet_15B();
	void parse_data() override;


	std::vector<int>& get_l()
	{
		return L;
	}

	std::vector<int>& get_lreg()
	{
		return Lreg;
	}

	std::vector<double>& get_pmax()
	{
		return pmax;
	}

	std::vector<double>& get_pmid()
	{
		return pmid;
	}

	std::vector<double>& get_pmin()
	{
		return pmin;
	}

	std::vector<double>& get_angle1()
	{
		return angle1;
	}

	std::vector<double>& get_angle2()
	{
		return angle2;
	}

	std::vector<double>& get_angle3()
	{
		return angle3;
	}

	std::vector<double>& get_almax()
	{
		return almax;
	}

	std::vector<double>& get_almid()
	{
		return almid;
	}

	std::vector<double>& get_almin()
	{
		return almin;
	}

	std::vector<double>& get_atmax()
	{
		return atmax;
	}

	std::vector<double>& get_atmid()
	{
		return atmid;
	}

	std::vector<double>& get_atmin()
	{
		return atmin;
	}

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

