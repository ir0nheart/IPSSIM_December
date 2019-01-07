#pragma once
class Node
{
public:
	Node(int nodenumber_,int noderegion_,double x_,double y_,double z_, double por_,double sop_);
	~Node();


	void set_sw(const double sw)
	{
		this->sw = sw;
	}

	void set_pm1(const double pm1)
	{
		this->pm1 = pm1;
	}

	void set_um2(const double um2)
	{
		this->um2 = um2;
	}

	void set_um1(const double um1)
	{
		this->um1 = um1;
	}

	void set_rcit(const double rcit)
	{
		this->rcit = rcit;
	}

	void set_dswdp(const double dswdp)
	{
		this->dswdp = dswdp;
	}

	void set_cs1(const double cs1)
	{
		this->cs1 = cs1;
	}

	

	void set_sl(const double sl)
	{
		this->sl = sl;
	}

	void set_sr(const double sr)
	{
		this->sr = sr;
	}

	void set_dpdtitr(const double dpdtitr)
	{
		this->dpdtitr = dpdtitr;
	}


	void set_pvec(const double pvec)
	{
		this->pvec = pvec;
	}

	void set_uvec(const double uvec)
	{
		this->uvec = uvec;
	}

private:
	int nodeNumber;
	int nodeRegion;
	double node_x;
	double node_y;
	double node_z;
	double porosity;
	double storativity;
	double sw;
	double pm1;
	double um2;
	double um1;
	double rcit;
	double dswdp;
	double cs1;
	double sl;
	double sr;
	double dpdtitr;
	double pvec;
	double uvec;
};

