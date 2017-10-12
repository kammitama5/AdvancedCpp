#include <iostream>
#include <string>

#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle rect;
	cout << "You just created an instance " << endl;
	cout << "Please set the length, width with a space" << endl;
	cin >> rect;


	cout << "The rectangle length is " << rect;

	// enter length and width and fill 
	// rectangle(r) cin r cout r
	// if have time overload operator
	cout << "hello" << endl;
	system("PAUSE");
	return 0;
}