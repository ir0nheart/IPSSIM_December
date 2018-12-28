#include "dataSet_15A.h"
#include <iostream>


dataSet_15A::dataSet_15A(std::string data_,std::string type_)
{
	name = "Data Set 15A";
	data = data_;
	type = type_;
	std::cout << "Data Set 15A - is created " << std::endl;
}


dataSet_15A::~dataSet_15A()
{
	std::cout << "Data Set 15A - is destroyed " << std::endl;
}

void dataSet_15A::parse_data()
{
	while (std::find(data.begin(), data.end(), '\r') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
	}
	//Remove fortran string char "'" from the string
	while (std::find(data.begin(), data.end(), '\'') != data.end()){
		data.erase(std::remove(data.begin(), data.end(), '\''), data.end());
	}

	std::vector<std::string> strs = makeStringVector(data);

	if (strs[0] != "ELEMENT")
	{
		//Command on Error
	}
	else{

		if (type == "3D")
		{
			PMAXFA = std::stod(strs[1]);
			PMIDFA = std::stod(strs[2]);
			PMINFA = std::stod(strs[3]);
			ANG1FA = std::stod(strs[4]);
			ANG2FA = std::stod(strs[5]);
			ANG3FA = std::stod(strs[6]);
			ALMAXF = std::stod(strs[7]);
			ALMIDF = std::stod(strs[8]);
			ALMINF = std::stod(strs[9]);
			ATMAXF = std::stod(strs[10]);
			ATMIDF = std::stod(strs[11]);
			ATMINF = std::stod(strs[12]);
		}
		else if (type == "2D")
		{
			PMAXFA = std::stod(strs[1]);
			PMINFA = std::stod(strs[2]);
			ANG1FA = std::stod(strs[3]);			
			ALMAXF = std::stod(strs[4]);
			ALMINF = std::stod(strs[5]);
			ATMAXF = std::stod(strs[6]);
			ATMINF = std::stod(strs[7]);
		}
		else
		{
			//Command Error
		}
	}
}
