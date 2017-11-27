#include <iostream>
#include "Rectangle.h"

//Ostream
template<typename T>
ostream& operator<<(ostream& output, const Rectangle<T> &r)
{
	output << "width: " << r.width << endl
		<< "length: " << r.length << endl
		<< "perimeter: " << r.calcPerimeter() << endl
		<< "Area: " << r.calcArea() << endl
	return output;

}

//Istream
template<typename T>
istream& operator>>(istream& input, Rectangle<T> &r)
{


	input >> r.length;
	input >> r.width

		return input;
}

// Perimeter
template<class T>
T Rectangle<T>::calcPerimeter() const
{
	T perimeter;
	perimeter = (2 *length) + (2 * width);
	return perimeter;
}

// Area
template<class T>
T Rectangle<T>::calcArea() const
{
	T area;
	area = length * width;
	return area;
}



