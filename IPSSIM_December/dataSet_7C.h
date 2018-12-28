#pragma once
#include "DataSet.h"
class dataSet_7C :
	public DataSet
{
	/* Matrix Equation Solver Controls for Concentration/Temperature Solution (one line)
	* Variable                      Description
	* CSOLVU                        Name of solver to be used to obtain the pressure solution.
	*								Select one of the following.
	*								"DIRECT" = Banded Gaussian Elimination
	*								"CG" = IC-Preconditioned conjugate gradient
	*								"GMRES" = ILU- Preconditioned generalized minimum residual
	*								"ORTHOMIN" = ILU- Preconditioned Orthomin
	*
	*								Note: CG maybe used only in the absence of upstream weighting (UP = 0);
	* ITRMXU                        Maximum number of solver iterations during concentration/temperature solution
	* TOLU                          Convergence Tolerance for solver iterations during concentration/temperature solution
	*/
public:
	dataSet_7C(std::string data_);
	~dataSet_7C();

	void parse_data() override;
private:
	std::string csolvu;
	int itrmxu;
	double tolu;
};

