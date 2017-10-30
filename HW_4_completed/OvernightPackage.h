#ifndef OVERNIGHTPACKAGE_
#define OVERNIGHTPACKAGE_

#include "Package.h"
#include "TwoDayPackage.h"
#include <string>
using std::string;

class OvernightPackage : public Package{ // derive from Package class

private:
	double overnightFeePerOunce;
public:
	OvernightPackage(const string &, const string &, const string &, const string &, const string &, const string &,
		double, double, double);

	void setOverNightFeePerOunce(double);
	double getOverNightFeePerOunce() const;

	double calculateCost() const;

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

string name;
string address;
string city;
string state;
string senderzip;
string reczip;
double weight;
double costperounce;


*/