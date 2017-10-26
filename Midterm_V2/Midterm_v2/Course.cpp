#include "Course.h"
#include "Time.h"
#include "Date.h"

#include <iostream>
#include <string>




//Course(string, string, string, Date dateStart(), Date dateEnd(),
	//Time(timeStart()), Time(timeEnd())){

//}

/*

Course::Course(){

} // prints out course deleted
std::string Course::getCourseNumber() const{
	return '.d';
}

std::string Course::getCourseName() const{

	return '.d';
}
std::string Course::getCourseMeetDays() const{
	return '.d';
}

*/
double Course::getCourseNumUnits() const{
	return 1.0;
}

Time Course::getCourseDate(){
	return 'g';
}

Date Course::getCourseTime(){
	return 'g';
}


void Course::setCourseNumber(std::string){

	
}
void Course::setCourseName(std::string){

}


void Course::setCourseMeetDays(std::string){

}


void Course::setNumUnits(double){

}

void Course::setDate(){

}


void Course::setTime(){

}


double Course::calcDailyDuration(double){

	return 1.0;
} // returns fraction, don't repeat code