#pragma once
#include <string>
#include "DataSet.h"

class dataSet_1 : DataSet
{
/*  Output Heading(Two Lines)
	Variables:
		Title_1    First Line of heading for the input data set
		Title_2    Second line of heading for the input data set
*/
public:
	dataSet_1(std::string data_);
	~dataSet_1();
	void set_title_1(std::string str){ title_1 = str; }
	void set_title_2(std::string str){ title_2 = str; }
	std::string get_title_1() const { return title_1; };
	std::string get_title_2() const { return title_2; };
	void parse_data() override;
private:
	std::string title_1;
	std::string title_2;
};

