#pragma once
#include "DataSet.h"
class dataSet_7A :
	public DataSet
{
	/* Iteration Controls for Resolving Nonlinearities (one line)
	 * Variable                      Description
	 * ITRMAX                        Maximum number of iterations allowed per time step to resolve nonlinearities.
	 *								 Set a value of +1 for noniterative solution. Noniterative solution may be used
	 *								 for saturated aquifers when density variablity of the fluid is  small or for unsaturated
	 *								 aquifers when time steps are chosen to be small.
	 * RPMAX                         Absolute iteration convergence criterion for pressure solution. - Omitted
	 * RUMAX                         Absolute iteration convergence criterion for concentration/temperature solution. - Omitted
	 */
public:
	dataSet_7A(std::string data_);
	~dataSet_7A();
	void parse_data() override;
private:
	int itrmax;
	double rpmax;
	double rumax;
};

