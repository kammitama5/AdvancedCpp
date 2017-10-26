#include "Time.h"
#include <iostream>
#include <string>

using std::iostream;
using std::istream;

#include <iomanip>
#include <iostream>

using std::setw;


Time::Time(int, int){
	

}

//void Time& setHour(int);
//void Time& setMinute(int);

int Time::getHour() const
{
	return 0;
}
int Time::getMinute() const{
	return 0;
}

void Time::printUniversal() const{
	//cout << Date.month
	// should be between 0 and 24
}

void Time::printStandard() const{
	//cout << Date.month << '/' << Date.day << '/' << Date.year;
	// should not allow 18:20PM
}


 ostream &operator<<(ostream & output, const Time & standardtime)
{
	//.length wasn't working :(
	/*
	for (int i = 0; i < standardtime.length; i++)
	{
		output << std::setw(3) << standardtime.getHour; 
	}
	return output;
	*/
	return output;
}


istream &operator>>(istream & input, Time & standardtime){

	//.length not working
	/*
	for (int i = 0; i < standardtime.length; i++);
	{

		input >> standardtime.getHour;
	}
	return input
	*/
	return input;
}