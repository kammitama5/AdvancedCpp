//Krystal Maughan
//CSIS 137
//I'm doing the best I can
//haven't heard from my classmate
//I've done all this code myself
//as well as the UML

// the ones that are commented out I couldn't get to work :(
// I'm still working through them as best I can

#include <iostream>
#include <string>

#include "Course.h"
#include "CourseSchedule.h"
#include "Date.h"
#include "Semester.h"
#include "Time.h"

using namespace std;

int main()
{

	char keypressed = '/0';
	char choice; // menu continues

	while (keypressed != '4')
	{
		cout << "Welcome to your Semester Program" << endl;
		cout << "Please made a choice from the following menu " << endl;
		cout << "=========================" << endl;
		cout << "1) Enter a new Course" << endl;
		cout << "2) Remove a course" << endl;
		cout << "3) Print a semester schedule" << endl;
		cout << "4) Quit the program" << endl;
		cin >> keypressed;

		// check for errors/ non-valid options
		if (keypressed == '1'){
			cout << "Enter the coursed you would like to add " << endl;
			cin >> choice;
			break; // this is not permanent
		}
		else if (keypressed == '2'){
			// print courses, then...
			cout << "Enter the course you would like to remove" << endl;
			cin >> choice;
			break; // this is not permanent
		}
		else if (keypressed == '3'){
			cout << "Here is the semester schedule" << endl;
			cin >> choice;
			break; // this is not permanent
		}
		else {
			cout << "Sorry; that is not a valid option. Please try again" << endl;
			cin >> keypressed; // this is not permanent
		}


	}

	
	/*
	1) Enter a new Course
	2) Remove a course
	3) Print a semester schedule
	4) Quit the program
	*/




	/*
	CLASS SCHEDULE
	===================
	Name : Jane Doe 
	Semester: Fall 2017 (09/03/17 - 12/18/17)
	Number of classes : 2
	=====================
	Course Inf: CSIS 121 - Coq 
	# of Units: 3.00
	Course Dates: 09/08/2017 - 10/15/17 
	Meeting Days: MW 
	Meeting Time: 10:45AM - 12:10PM
	Daily Duration: 1.42 hours
	*/




	system("PAUSE");
	return 0;
}