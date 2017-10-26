#ifndef TIME_
#define TIME_
#include <iostream>

#include "Date.h"

using std::ostream;
using std::istream;


class Time{
	friend ostream &operator<<(ostream &, const Time &);
	friend istream &operator>>(istream &, const Time &);

private:
	int hour;
	int minute;
public:
	Time(int = 0, int = 0);
	
	// defined getHour and getMinute in Date.h

	int getHour() const;
	int getMinute() const;

	void printUniversal() const;
	void printStandard() const;

	



};
#endif