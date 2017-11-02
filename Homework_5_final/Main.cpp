// CSIS 137
// Krystal Maughan
// Homework 5

#include <iostream>
#include <string>

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"


using namespace std;

int main()
{

	
	// create base-class object
	TwoDayPackage a("Haskell Curry", "1 Applicative Way", "Monad Street", "Glasgow", "\133/", "91601",
		1.0, 2.2, 3.0);
	TwoDayPackage b("Richard Hickey", "1 Macro Way", "Functor Avenue", "New York", "11120", "91601",
		2.3, 2.2, 3.0);
	OvernightPackage c("Richard Stallman", "1 Foot Avenue", "Palo Alto", "California", "91305", "91601",
		4.0, 1.2, 3.0);
	OvernightPackage d("Evan Czaplicki", "1 Elm Way", "New York", "New York", "11207", "91601",
		5.5, 2.3, 3.0);
	OvernightPackage e("Phil Freeman", "Cannibas Corpse Way", "Granada Hills", "California", "92403", "91601",
		5.0, 2.7, 3.0);

	const int SIZE = 5;


	Package* p[SIZE];
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	p[3] = &d;
	p[4] = &e;

	// get addresses from sender and recipient
	cout << "Calling Address of Sender and Zip of Recipient" << endl;

	double totalsum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		//Name :
		cout << "-------Name -------" << endl;
		p[i]->getName();
		cout << p[i]->getName() << endl;
		// Address:
		cout << "-------Address-------" << endl;
		p[i]->getAddress();
		cout << p[i]->getAddress() << endl;
		// City 
		cout << "-------City -------" << endl;
		p[i]->getCity();
		cout << p[i]->getCity() << endl;
		// State
		cout << "-------State-------" << endl;
		p[i]->getState();
		cout << p[i]->getState() << endl;
		// Zip
		cout << "-------Receiver's Zip-------" << endl;
		p[i]->getRecZip();
		cout << p[i]->getRecZip() << endl;
		// Recipient Zip
		cout << "-------Sender's Zip-------" << endl;
		p[i]->getSenderZip();
		cout << p[i]->getSenderZip() << endl;



		cout << endl;
		cout << "Printing out the cost for each package: " << endl;
		// Calculate Cost
		
		for (int i = 0; i < SIZE; i++)
		{
			p[i]->calculateCost();
			cout << p[i]->calculateCost() << endl;

		}

		cout << endl;
		cout << "Printing out the Total for all packages:" << endl;
		p[i]->calculateCost();
		totalsum = totalsum + p[i]->calculateCost();
		cout << totalsum << endl;;
		
	}

	// cout << "Calculating the cost for each: " << endl;
	// call each package's calculate cost to print the result

	// add the total cost for each package


	/*
	Re-design the Package class Inheritance Hierarchy you created in HW4 to implement polymorphism by makin
	the calculateCost() function virtual

	Test your new Package class Inheritance Hierarchy by creating a test program that contains 
	an array of Package pointers. Have the array be able to hold up to 5 Package pointers.
	The Package pointers can point to objects of the derived class TwoDayPackage, objects of the 
	derived class OvernightPackage, or objects of the base class Package.

	First create some objects of the various types and store them in the array. Loop through the 
	array to process the various Package objects polymorphically. For each Package (all packages),
	invoke get functions to obtain the address information of the sender and recipient and then
	print the two addresses for the mailing labels. 
	Next call each Package's calculateCost() member function and print the result. 
	Keep track of the total cost for all the packages in the array and display this total
	when the loop terminates.
	*/
	
	/*
	// initial package
	cout << "Package 1: " << p.getName() << "----" << p.getAddress() << "----" << p.getCity() << "----" << p.getSenderZip() << endl;
	cout << "Package 1: " << p.getRecZip() << "----" << p.getWeight() << "----" << p.getCostPerOunce() << "----" << p.calculateCost() << endl;
	*/

	system("PAUSE");
	return 0;
}