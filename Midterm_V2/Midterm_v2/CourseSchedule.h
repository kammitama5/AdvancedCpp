#ifndef COURSESCHEDULE_
#define COURSESCHEDULE_

#include "Date.h"
#include "Time.h"
#include "CourseSchedule.h"
#include "Course.h"

class CourseSchedule{

private:
	std::string studentName;
	//Semester semester;
	Course *courses;
	int maxsize;
	static int numCourses; // track numCourses
public:

	//CourseSchedule(std::string, Semester, int);
	~CourseSchedule();

	std::string getStudentName();
	std::string getSemester();
	std::string getNumCourses();

	void setStudentName();

	//make sure course dates are not outside semester date in this function
	//void checkDates(Semester(), CourseDate(), CourseEnd());

	void addCourse(Course()); // prints out confirming that has been added to
		// course schedule array

		//remove course
		//update numCourses
		void removeCourse(Course);
















};
#endif