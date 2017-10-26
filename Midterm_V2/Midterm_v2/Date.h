#ifndef DATE_
#define DATE_

#include <iostream>

using std::ostream;
using std::istream;

class Date{

	friend ostream &operator<<(ostream &, const Date &);
	friend istream &operator>>(istream &, const Date &);

	friend ostream &operator>(ostream &, const Date &); //overload >
	friend istream &operator<(istream &, const Date &); // overload <
	friend ostream &operator>=(ostream &, const Date &); // overload >=
	friend istream &operator<=(istream &, const Date &); // overload <=
	friend ostream &operator==(ostream &, const Date &); // overload ==
	friend istream &operator!=(istream &, const Date &); // overload !=



private:
	int month;
	int day;
	int year;

public:
	Date(int = 0, int = 1, int = 1980);
	void setDate(int, int, int);

	void setHour(int);
	void setDay(int);
	void setYear(int);

	int getMonth() const;
	int getDay() const;
	int getYear() const;

};
#endif