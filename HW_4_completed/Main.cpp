// CSIS 137
// Krystal Maughan
// Homework 4

#include <iostream>
#include <string>

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"


using namespace std;

int main()
{



	Package p("Eric Schmitt", "1 Hacker Way", "Mountain View", "California", "91304", "91601",
		5.0, 2.2);
	OvernightPackage o("Richard Stallman", "1 Foot Avenue", "Palo Alto", "California", "91305", "91601",
		5.0, 2.2, 3.0);
	TwoDayPackage t("Haskell Curry", "1 Applicative Way", "Monad Street", "Glasgow", "\133/", "91601",
		5.0, 2.2, 3.0);

	/*
	test with each type of package 
	test member with calculateCost and make sure all members work correctyl
	*/

	// initial package
	cout << "Package 1: " << p.getName() << "----" << p.getAddress() << "----" << p.getCity() << "----" << p.getSenderZip() << endl;
	cout << "Package 1: " << p.getRecZip() << "----" << p.getWeight() << "----" << p.getCostPerOunce() << "----" << p.calculateCost() << endl;
	
	//overnight package -> very $$$
	cout << "Package 2: " << o.getName() << "----" << o.getAddress() << "----" << o.getCity() << "----" << o.getSenderZip() << endl;
	cout << "Package 2: " << o.getRecZip() << "----" << o.getWeight() << "----" << o.getCostPerOunce() << "----" << o.calculateCost() << endl;

	// two-day package-> should be in between initial and overnight
	cout << "Package 3: " << t.getName() << "----" << t.getAddress() << "----" << t.getCity() << "----" << t.getSenderZip() << endl;
	cout << "Package 3: " << t.getRecZip() << "----" << t.getWeight() << "----" << t.getCostPerOunce() << "----" << t.calculateCost() << endl;

	system("PAUSE");
	return 0;
}