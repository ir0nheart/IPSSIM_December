#pragma once
#include "DataSet.h"
class dataSet_3 :
	public DataSet
{
	/* Simulation Control Numbers (one line)
	 * Variable          Description
	 * NN				 Exact Number of nodes in finite element mesh
	 * NE				 Exact Number of elements in finite element mesh
	 * NPBC				 Exact Number of nodes at which pressure is a specified constant value or function of time
	 * NUBC				 Exact Number of nodes at which temperature or concentration is a specified constant value or function of time
	 * NSOP				 Exact Number of nodes at which fluid source/sink is a specified constant value or function of time
	 * NSOU				 Exact Number of nodes at which an energy or solute mass source/sink is a specified constant value or function of time
	 * NOBS				 Exact Number of points at which observations will be made. Set to zero for no observations
	 * 
	 * Note: The order in which NPBC,NUBC,NSOP, and NSOU are listed above is different from
	 * the order in which corresponding datasets(19,20,17 and 18) appear in the ".inp" file
	 */
public:
	dataSet_3(std::string data_);
	~dataSet_3();
	void parse_data() override;


	int get_nn() const
	{
		return NN;
	}

	int get_ne() const
	{
		return NE;
	}

	int get_npbc() const
	{
		return NPBC;
	}

	int get_nubc() const
	{
		return NUBC;
	}

	int get_nsop() const
	{
		return NSOP;
	}

	int get_nsou() const
	{
		return NSOU;
	}

	int get_nobs() const
	{
		return NOBS;
	}

private:
	int NN;
	int NE;
	int NPBC;
	int NUBC;
	int NSOP;
	int NSOU;
	int NOBS;
};

