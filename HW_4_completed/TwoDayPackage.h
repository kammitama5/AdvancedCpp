#ifndef TWODAYPACKAGE_
#define TWODAYPACKAGE_

#include "Package.h"
#include "TwoDayPackage.h"
#include <string>
using std::string;

class TwoDayPackage : public Package{ // derive from Package Class

	public:
		TwoDayPackage(const string &, const string &, const string &, const string &, const string &, const string &,
			double, double, double);

		void setFlatFee(double);
		double getFlatFee() const;

		double calculateCost() const;
	private:
		double flatFee;

};
#endif

/*
should inherit the functionality of base class Package,
but also include a data member that represents a flat fee that the shipping
company charges for two-day delivery service
-TwoDayPackage's constructor should receive a value to initialize this flat fee data member
-TwoDaypackage should redefine member function calculateCost so that it 
computes the shipping cost by adding the flat fee to the weight-based cost calculated
by base class Package's calculateCost function (so cost = packageCost + flatfee)

*/