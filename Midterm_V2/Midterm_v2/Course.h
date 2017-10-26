#ifndef COURSE_
#define COURSE_

#include  "Time.h"
#include  "Date.h"
#include <string>
#include <iostream>

class Course{

private:
	std::string courseNumber;
	std::string courseName;
	std::string courseMeetDays;
	double courseUnits;
	Date dateStart;
	Date dateEnd;
	Time timeStart;
	Time timeEnd;
public:
	Course(std::string, std::string, std::string, Date dateStart(), Date dateEnd(),
		Time(timeStart()), Time(timeEnd()));

	Course(); // prints out course deleted
	std::string getCourseNumber() const;
	std::string getCourseName() const;
	std::string getCourseMeetDays() const;
	double getCourseNumUnits() const;

	Time getCourseDate();
	Date getCourseTime();
	

	void setCourseNumber(std::string);
	void setCourseName(std::string);
	void setCourseMeetDays(std::string);
	void setNumUnits(double);

	void setDate();
	void setTime();
	double calcDailyDuration(double); // returns fraction, don't repeat code

};
#endif