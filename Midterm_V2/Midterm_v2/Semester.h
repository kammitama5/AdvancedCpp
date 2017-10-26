#ifndef SEMESTER_
#define SEMESTER_

#include "Date.h"
#include "Course.h"
#include "CourseSchedule.h"
#include "Semester.h"


using std::ostream;
using std::istream;

class Semester{
	friend istream &operator>>(istream &, const Semester &); // overload >>
private:
	std::string semesterName;
	Date startDate;
	Date endDate;
	
public:
	// not sure if this is correct, but...
	//SA, Date dateStart, Date dateEnd;

	void printSemester();

	std::string getSemesterName();
	Date getStartDate;
	

	std::string setSemesterName();
	void setStartDate(int, int, int);
	void setEndDate(int, int, int);

};
#endif