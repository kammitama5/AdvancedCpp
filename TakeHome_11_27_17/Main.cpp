// CSIS 137
// Krystal Maughan

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle<float> Rect;
	float length, width;
	

	cout << "Enter the length of the rectangle: ";
	cin >> length;
	Rect.setLength(length);
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	Rect.setWidth(width);
	

	// I couldn't get it to print! Argh!

	system("PAUSE");
	return 0;
}
