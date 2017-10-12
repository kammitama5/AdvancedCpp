/*File rectangle.cpp -- Function Implementation File*/
//Contains function definitions for Rectangle class functions
#include <iomanip>

#include "Rectangle.h"
#include <iostream>
using std::setw;

using namespace std;


/*RECTANGLE MEMBER FUNCTION DEFINITONS*/

/*******************************************************************************
Rectangle::setLength
If the argument passed to the setLength function is zero or greater it is copied
into the member variable length and true is returned.  If the argument is negative,
the value of length remains unchanged and false is returned
*******************************************************************************/
bool Rectangle::setLength(double len)
{
	bool validData;  //local variable

	if (len >= 0)  //if length is positive data is valid
	{
		length = len;  //set the member variable
		validData = true;
	}
	else  //else data is invalid
		validData = false;

	return validData;  //return to calling program whether or not data is valid
}

/*******************************************************************************
Rectangle::setWidth
If the argument passed to the setWidth function is zero or greater it is copied
into the member variable length and true is returned.  If the argument is negative,
the value of width remains unchanged and false is returned
*******************************************************************************/
bool Rectangle::setWidth(double w)
{
	bool validData;  //local variable

	if (w >= 0)  //if length is positive data is valid
	{
		width = w;  //set the member variable
		validData = true;
	}
	else  //else data is invalid
		validData = false;

	return validData;  //return to calling program whether or not data is valid
}

/*******************************************************************************
Rectangle::getLength
This function returns the value that is in the private member length
*******************************************************************************/
double Rectangle::getLength()const
{
	return length;
}

/*******************************************************************************
Rectangle::getWidth
This function returns the value that is in the private member width
*******************************************************************************/
double Rectangle::getWidth()const
{
	return width;
}

/*******************************************************************************
Rectangle::calcArea
This function calculates and returns the area of the rectangle
*******************************************************************************/
double Rectangle::calcArea()const
{
	return length * width;
}

double Rectangle::calcPerimeter() const
{
	return ((length * 2) + (width * 2));
}

ostream &operator<<(ostream & output, const Rectangle &testnum)
{
	output << "-" << testnum << "-"
		<< testnum.length << "-" << testnum.width;
		return output;
}

istream &operator>>(istream &input, Rectangle &testnum)
{
	input.ignore();
	input >> setw(1) >> testnum.length;
	input.ignore(1);
	input >> setw(1) >> testnum.width;
	return input;
}