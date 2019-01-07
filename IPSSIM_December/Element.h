#pragma once
class Element
{
public:
	Element(int elnum_,int elreg_,double ang1_,double ang2_,double ang3_,double almax_,double almid_,double almin_,
		double atmax_,double atmid_,double atmin_,double permxx_,double permxy_,double permxz_,double permyx_,double permyy_,double permyz_,
		double permzx_,double permzy_,double permzz_);
	~Element();


	int& get_elementnumber()
	{
		return elementnumber;
	}

	int& get_element_region()
	{
		return elementRegion;
	}

	double& get_ang1()
	{
		return ang1;
	}

	double& get_ang2()
	{
		return ang2;
	}

	double& get_ang3()
	{
		return ang3;
	}

	double& get_almax()
	{
		return almax;
	}

	double& get_almid()
	{
		return almid;
	}

	double& get_almin()
	{
		return almin;
	}

	double& get_atmax()
	{
		return atmax;
	}

	double& get_atmid()
	{
		return atmid;
	}

	double& get_atmin()
	{
		return atmin;
	}

	double& get_permxx()
	{
		return permxx;
	}

	double& get_permxy()
	{
		return permxy;
	}

	double& get_permxz()
	{
		return permxz;
	}

	double& get_permyx()
	{
		return permyx;
	}

	double& get_permyy()
	{
		return permyy;
	}

	double& get_permyz()
	{
		return permyz;
	}

	double& get_permzx()
	{
		return permzx;
	}

	double& get_permzy()
	{
		return permzy;
	}

	double& get_permzz()
	{
		return permzz;
	}

private:
	int elementnumber;
	int elementRegion;
	double ang1;
	double ang2;
	double ang3;
	double almax;
	double almid;
	double almin;
	double atmax;
	double atmid;
	double atmin;
	double permxx;
	double permxy;
	double permxz;
	double permyx;
	double permyy;
	double permyz;
	double permzx;
	double permzy;
	double permzz;

};

