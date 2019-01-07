#include "Element.h"


Element::Element(int elnum_, int elreg_, double ang1_, double ang2_, double ang3_, double almax_, double almid_, double almin_,
	double atmax_, double atmid_, double atmin_, double permxx_, double permxy_, double permxz_, double permyx_, double permyy_, double permyz_,
	double permzx_, double permzy_, double permzz_):elementnumber(elnum_),elementRegion(elreg_),ang1(ang1_),ang2(ang2_),ang3(ang3_),
	almax(almax_),almid(almid_),almin(almin_),atmax(atmax_),atmid(atmid_),atmin(atmin_),permxx(permxx_),permxy(permxy_),permxz(permxz_),
	permyx(permyx_),permyy(permyy_),permyz(permzy_),permzx(permzx_),permzy(permzy_),permzz(permzz_)
{
}


Element::~Element()
{
}
