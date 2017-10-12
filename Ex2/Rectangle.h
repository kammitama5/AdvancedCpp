#ifndef RECTANGLE_H
#define RECTANGLE_H

//Rectangle Class Declaration
#include <iostream>
using std::ostream;
using std::istream;

#include <string>
using std::string;

class Rectangle
{
	friend ostream &operator<<(ostream &, const Rectangle &);
	friend istream &operator>>(istream &, Rectangle &);

private: //make the attributes private
	double length;
	double width;

public: //function prototypes
	bool setLength(double);
	bool setWidth(double);
	double getLength() const;
	double getWidth() const;
	double calcArea() const;
	double calcPerimeter() const;

};

#endif