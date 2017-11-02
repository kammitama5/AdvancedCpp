#include <iostream>
using std::string;

#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"


OvernightPackage::OvernightPackage(const string &name_, const string &address_, const string &city_, const string &state_, const string &senderzip_, const string &reczip_,
	double weight_, double costperounce_, double fee)
	: Package(name_, address_, city_, state_, senderzip_, reczip_,
	weight_, costperounce_)
{
	setOverNightFeePerOunce(fee);
}


void OvernightPackage::setOverNightFeePerOunce(double overnightFee)
{
	overnightFeePerOunce = (overnightFee < 0.0) ? 0.0 : overnightFee;


}

double OvernightPackage::getOverNightFeePerOunce() const
{
	return overnightFeePerOunce;
}

double OvernightPackage::calculateCost() const
{
	return getWeight() * (getCostPerOunce() + getOverNightFeePerOunce());

}

/*
string name;
string address;
string city;
string state;
string senderzip;
string reczip;
double weight;
double costperounce;
*/