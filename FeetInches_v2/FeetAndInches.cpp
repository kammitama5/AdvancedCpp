// This is your cpp file

#include <iomanip>
using std::setw;

#include "FeetAndInches.h"

#include <iostream>
#include <string>

using namespace std;


FeetAndInches::~FeetAndInches()
{
} // destructor


void FeetAndInches::FeetAndInchesToDecimal(int)
{

	// converts totalfeet to decimal value taking in value of totalfeet 
	cout << "Decimal value is " << endl;

}


ostream &operator<<(ostream &output, const FeetAndInches &testnum)
{
	output << "(" << testnum.feet;
	return output;

}

istream &operator>>( istream &input, FeetAndInches &testnum)
{
	input.ignore();
	input >> setw(3) >> testnum.feet;
	input.ignore();
	input >> setw(3) >> testnum.inches;
	input.ignore();
	return input;
}

// getters and setters

// accessors -> 
int FeetAndInches::getTotalInches(void) const
{
	return totalinches;//change
}

void FeetAndInches::setTotalInches(int totalInches)
{
	totalinches = totalInches;
}

void FeetAndInches::setTotalFeet(int totalFeet)
{
	totalFeet = totalFeet;
}//set total feet

int FeetAndInches::getFeet(void) const
{
	return totalfeet; //change
}// get feet

void FeetAndInches::setFeet(int Feet)
{
	feet = Feet;
}// set feet

int FeetAndInches::getInches(void) const
{
	return inches;// change

}// get inches

void FeetAndInches::setInches(int Inches)
{

	Inches = inches;
}// set inches


// operator overloading

FeetAndInches FeetAndInches::operator + (FeetAndInches &test)
{			
	FeetAndInches total1;
	total1.totalinches = totalinches + test.inches;
	return(total1);

}// addition

FeetAndInches FeetAndInches::operator - (FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches - test.inches;
	return(total1);

}//subtraction


FeetAndInches FeetAndInches::operator!=(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches != test.inches;
	return(total1);

}// not equal

FeetAndInches FeetAndInches::operator==(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches == test.inches;
	return(total1);
}// equal

FeetAndInches FeetAndInches::operator <<(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches << test.inches;
	return(total1);
}// << overloaded

FeetAndInches FeetAndInches::operator >>(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches >> test.inches;
	return(total1);
}// >> overloaded

FeetAndInches FeetAndInches::operator >(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches > test.inches;
	return(total1);
}// > overloaded

FeetAndInches FeetAndInches::operator <(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches < test.inches;
	return(total1);
}// < overloaded

FeetAndInches FeetAndInches::operator >=(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches >= test.inches;
	return(total1);
}// >= overloaded

FeetAndInches FeetAndInches::operator <=(FeetAndInches &test)
{
	FeetAndInches total1;
	total1.totalinches = totalinches <= test.inches;
	return(total1);
}// <= overloaded




