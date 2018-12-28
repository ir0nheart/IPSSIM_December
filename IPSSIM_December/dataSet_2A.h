#pragma once
#include "DataSet.h"

class dataSet_2A:DataSet
{
	/* Simulation Type (One Line Input)
	 * Four Words. The first word must be "SUTRA" - We actually gonna ignore this
	 * The second and third words indicate the version. - We will implement only "Version 2.2"
	 * The Fourth indicates the type of transport, and must be either "ENERGY" or "SOLUTE"
	 * Additional words like "TRANSPORT" will be ignored
	 */
public:
	dataSet_2A(std::string data_);
	~dataSet_2A();
	std::string sim_name() const
	{
		return simName;
	}

	std::string version_str() const
	{
		return versionStr;
	}

	std::string sim_type_str() const
	{
		return simTypeStr;
	}

	std::string transport_str() const
	{
		return transportStr;
	}

	void parse_data() override;
private:
	std::string simName;
	std::string versionStr;
	std::string simTypeStr;
	std::string transportStr;
};

