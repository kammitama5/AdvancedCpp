#include "Time.h"
#include <iostream>
#include <string>

#include "Course.h"
#include "Date.h"
#include "Semester.h"

using std::iostream;
using std::istream;

#include <iomanip>
#include <iostream>

using std::setw;



//Semester(semesterName(), Date(startDate()), Date(endDate());



void Semester::printSemester(){


}

std::string Semester::getSemesterName(){

	return "ha";
}
//Date getStartDate();
//Date endDate();

std::string Semester::setSemesterName(){
	return "ha";
}

void Semester::setStartDate(int, int, int){

}

void Semester::setEndDate(int, int, int)
{

}




istream &operator>>(istream & input, Semester & standardtime){

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