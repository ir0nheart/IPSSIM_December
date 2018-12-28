#pragma once
#include "DataSet.h"
class dataSet_5 :
	public DataSet
{
	/* Numerical Control Parameters (one line)
	 * Variable                Description
	 * UP                      Fractional upstream weight for stabilization of oscillations in results
	 *						   due to high advective transport or unsaturated flow. UP may be given any value
	 *						   from 0.0 to +1.0. UP = 0.0 implies no upstream weighting (Galerkin Method).
	 *						   UP = 0.5 implies %50 upstream weighting, UP = 1.0 implies full upstream weighting.
	 *						   Recommended value is zero.
	 *						   WARNING: Upstream weighting increases the local effective longitudinal dispersivity of
	 *						   the simulation by approximately UP*(deltaLl/2) where deltaLl is the local distance between
	 *						   sides along the direction of flow. Note that amount of fthis increase varies from
	 *						   place to place depending on flow direction and element size. Thus, a nonzero value for UP
	 *						   actually changes the value of longitudinal dispersivity used by the simulation and broadens
	 *						   otherwise sharp concentration,temperature or saturation fronts.
	 * GNUP                    Pressure boundary condition factor or "conductance" A high value causes (SUTRA) IPSSIM
	 *						   simulated and specified pressure values at specific pressure nodes to be equal in all significant
	 *						   figures. A low value causes simulated pressure to deviate significantly from specified values.
	 *						   The ideal value of GNUP causes simulated and specified pressures to match in the largest six or
	 *						   seven significant figures only, and deviate in the rest. Trial and Error is required to determine an ideal
	 *						   GNUP value for a given simulation by comparing the values specified with those calculated at the appropriate
	 *						   nodes for different values of GNUP. An initial gues of 0.01 is suggested.
	 * GNUU                    Concentration/temperature boundary condition factor. A high value causes (SUTRA) IPSSIM
	 *						   simulated and specified values at specified concentration/temperature nodes to be equal in all significant
	 *						   figures. A low value causes simulated pressure to deviate significantly from specified values.
	 *						   The ideal value of GNUU causes simulated and specified concentration/temperature to match in the largest six or
	 *						   seven significant figures only, and deviate in the rest. Trial and Error is required to determine an ideal
	 *						   GNUU value for a given simulation by comparing the values specified with those calculated at the appropriate
	 *						   nodes for different values of GNUU. An initial gues of 0.01 is suggested.
	 */
public:
	dataSet_5(std::string data_);
	~dataSet_5();
	void parse_data() override;

	double get_up() const
	{
		return UP;
	}

	double get_gnup() const
	{
		return GNUP;
	}

	double get_gnuu() const
	{
		return GNUU;
	}

private:
	double UP;
	double GNUP;
	double GNUU;
};

