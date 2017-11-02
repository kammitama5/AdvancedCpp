#include <iostream>


#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"

#include <string>
using std::string;

TwoDayPackage::TwoDayPackage(const string &name_, const string &address_, const string &city_, const string &state_, const string &senderzip_, const string &reczip_,
	double weight_, double costperounce_, double doublefee_)
	: Package(name_, address_, city_, state_, senderzip_, reczip_,
	weight_, costperounce_)
{
	setFlatFee(doublefee_);
}

void TwoDayPackage::setFlatFee(double doublefee)
{
	flatFee = (doublefee < 0.0) ? 0.0 : doublefee;
}
double TwoDayPackage::getFlatFee() const
{

	return flatFee;
}

double TwoDayPackage::calculateCost() const
{

	return Package::calculateCost() + getFlatFee();
}