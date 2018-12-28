#pragma once
#include "DataSet.h"
class dataSet_4 :
	public DataSet
{
	/* Simulation Mode Options (one line)
	 * Variable           Description
	 * CUNSAT			  One word. Set to "SATURATED" to simulate only saturated flow.
	 *					  Set to "UNSATURATED" to simulate unsaturated/saturated ground-water flow
	 *					  Note: When UNSATURATED flow is allowed, the unsaturated flow functions must be programmed
	 *					  by the user in function UNSAT.
	 * CSSFLO             One word. Set to "TRANSIENT" for simulation of transient ground-water flow.
	 *					  Set to "STEADY" for simulation of steady-state flow.
	 *					  Note: When variable density simulations generally require TRANSIENT flow
	 * CSSTRA             One word. Set to "TRANSIENT" for simulation of transient solute or energy transport.
	 *					  Set to "STEADY" for simulation of steady-state transport.
	 *					  Note: Steady-State transport requires a steady-state flow field. So if CSSTRA ="Steady" then also set
	 *					  CSSFLO = "Steady"
	 * CREAD			  One word. Set to "COLD" to read initial condition data ".ics" file for a "cold start"
	 *					  (the very first time step of a simulation).
	 *					  Set to "WARM" to read initial condition data ".ics" file for a "warm restart" of a simulation using data
	 *					  that were previously stored by (SUTRA) IPSSIM in a ".rst" file.
	 *					  A "warm restart" is used only when continuing a previous simulation as though it had never been interrupted
	 *					  and with no changes in problem specification (except for changing time step size and extending simulation time)
	 * ISTORE             To store results each ISTORE time steps in the ".rst" file for later use as initial conditons on a restart
	 *					  set to +1 or greater value. To cancel storage, set to 0. This option is recommended as a backup storage of results of
	 *					  intermediate time steps during long simulations.
	 */
public:
	dataSet_4(std::string data_);
	~dataSet_4();
	void parse_data() override;


	std::string get_cunsat() const
	{
		return cunsat;
	}

	std::string get_cssflo() const
	{
		return cssflo;
	}

	std::string get_csstra() const
	{
		return csstra;
	}

	std::string get_cread() const
	{
		return cread;
	}

	int get_istore() const
	{
		return istore;
	}

private:
	std::string cunsat;
	std::string cssflo;
	std::string csstra;
	std::string cread;
	int istore;
};

