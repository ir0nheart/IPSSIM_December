#pragma once
#include "DataSet.h"
class dataSet_7B :
	public DataSet
{
	/* Matrix Equation Solver Controls for Pressure Solution (one line)
	* Variable                      Description
	* CSOLVP                        Name of solver to be used to obtain the pressure solution.
	*								Select one of the following.
	*								"DIRECT" = Banded Gaussian Elimination
	*								"CG" = IC-Preconditioned conjugate gradient
	*								"GMRES" = ILU- Preconditioned generalized minimum residual
	*								"ORTHOMIN" = ILU- Preconditioned Orthomin
	*								
	*								Note: CG maybe used only in the absence of upstream weighting (UP = 0);
	* ITRMXP                        Maximum number of solver iterations during pressure solution
	* TOLP                          Convergence Tolerance for solver iterations during pressure solution
	*/
public:
	dataSet_7B(std::string data_);
	~dataSet_7B();
	void parse_data() override;
private:
	std::string csolvp;
	int itrmxp;
	double tolp;
};

