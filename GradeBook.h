// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public 
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition

class GradeBook
{
public:
   explicit GradeBook( std::string,std::string); // constructor initialize courseName
   void setCourseName(std::string); // sets the course name
   std::string getCourseName() const; // gets the course name
   void displayMessage() const; // displays a welcome message
   void setInstructorName(std::string); // sets instructor name ###### B
   std::string getInstructorName() const; //gets instructor name  #### B
private:
   std::string courseName; // course name for this GradeBook
   std::string InstructorName; // Instructor's name ####### A
}; // end class GradeBook  
