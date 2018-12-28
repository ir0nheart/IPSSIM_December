#pragma once
#include <string>
#include <vector>
#include <sstream>

class Observation
{
public:
	Observation(std::string data_);
	void parse_obs();
	std::vector<std::string> makeStringVector(std::string s);
	~Observation();
private:
	std::string data;
	std::string obsnam;
	double xobs;
	double yobs;
	double zobs;
	std::string obssch;
	std::string obsfmt;
};

