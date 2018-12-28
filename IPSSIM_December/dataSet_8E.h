#pragma once
#include "DataSet.h"
class dataSet_8E :
	public DataSet
{
public:
	dataSet_8E(std::string data_);
	~dataSet_8E();
	void parse_data() override;
private:
	//Data Set 8E Output controls and options for ".bcof", ".bcos",".bcou", and ".bcop" Files
	std::string cinact; //Set to a value of "Y" to list all sources and boundary conditions.
	int nbcfpr; //Fluid source node output cycle for transient simulation. Output produced in the ".bcof" file on time steps
	int nbcspr; //Solute or energy source node output cycle for transient simulation. Output produced in the ".bcof" file on time steps
	int nbcppr; //Specified pressure node output cycle for transient simulation. Output produced in the ".bcof" file on time steps
	int nbcupr; //Specified concentration or temperature output cycle for transient simulation. Output produced in the ".bcof" file on time steps
	//Data Set 9
	double compfl; // Fluid compressibility
	double cw; // Fluid specific heat. Set to any number for solute-transport
	double sigmaw; // Fluid diffusivity.. Reduce value for tortuosity
	double rhow0; // Density of fluid at base concentration or temperature
	double urhow0; // Base value of solute concentration or temperature of fluid at which base fluid density
	double drwdu; // Coefficient of fluid density change with concentration or temperature
	double visc0; // for solute transport, fluid viscosity
	// Data Set 10;
	double compma; // solid matrix compressibility
	double cs; // solid grain specific heat
	double sigmas;//solid grain diffusivity .. set zero for solute-transport
	double rhos; // density of a solid grain
	// Data Set 11
	std::string adsmod; // for no sorption set to "none" and leave the rest blank
	double chi1; // value of linear freundlich or langmuir distribution coeff depending on sorption model
	double chi2; // value of Freundlich or Langmuir coefficient depending on sorption model
};

