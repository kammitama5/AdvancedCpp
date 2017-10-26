#ifndef OVERNIGHTPACKAGE_
#define OVERNIGHTPACKAGE_


#include <string>
using std::string;

class OvernightPackage{ // derive from Package class






private:
public:
	OvernightPackage(const string &, const string &, const string &,
		double = 0.0, double = 0.0);

};
#endif

/*
OvernightPackage should inherit the functionality of base class Package
and contain an additional data member representing an additional fee per
ounce charged for overnight-delivery service
-OvernightPackage's constructor should receive a value to initialize this additional
fee per ounce data member
-OvernightPackage should redefine member function calculateCost so that it adds
the additional fee per ounce to the standard cost per ounce before calculating 
the shipping cost ((so additional fee per ounce _ cost per ounce) * weight) 

*/