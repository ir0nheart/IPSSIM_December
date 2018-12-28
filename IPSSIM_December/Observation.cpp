#include "Observation.h"


Observation::Observation(std::string data_)
{
	data = data_;
}


Observation::~Observation()
{
}

void Observation::parse_obs()
{
	if (data != ""){
		std::vector<std::string> info = makeStringVector(data);
		if (info[4] == "OBS" || info[4] == "OBC"){//2D
			obsnam = info[0];
			xobs = std::stod(info[1]);
			yobs = std::stod(info[2]);
			zobs = -9999.99;
			obssch = info[3];
			obsfmt = info[4];
		}
		else if (info[5] == "OBS" || info[5] == "OBC")
		{
			obsnam = info[0];
			xobs = std::stod(info[1]);
			yobs = std::stod(info[2]);
			zobs = std::stod(info[3]);
			obssch = info[4];
			obsfmt = info[5];

		}
		else
		{
			//Command Error
		}
	}
}

std::vector<std::string> Observation::makeStringVector(std::string s)
{
	std::istringstream ss(s);
	std::vector<std::string> results(std::istream_iterator<std::string>{ss},
		std::istream_iterator<std::string>());
	return results;
}