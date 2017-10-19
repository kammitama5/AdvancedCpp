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


void FeetAndInches::FeetAndInchesToDecimal(int, int, int)
{

	// converts feet and inches to decimal value
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




