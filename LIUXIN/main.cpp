#include <iostream>
#include <string>

class GradeBook
{
public:
   GradeBook(std::string coursename,std::string teachername)
   {
       setCourseName(coursename);
       setTeacherName(teachername);
   }
   void setCourseName( std::string coursename)
   {
       CourseName=coursename;
   }
   std::string getCourseName()
   {
       return CourseName;
   }
   void setTeacherName(std::string teachername)
   {
       TeacherName=teachername;
   }
   std::string getTeacherName()
   {
       return TeacherName;
   }
   void displayMessage()
   {
       std::cout << "Welcome to the grade book for \n"<<getCourseName()<<"!"<<"\nThis course is prsented by:"<<getTeacherName()<<std::endl;
   }
private:
   std::string CourseName;
   std::string  TeacherName;

};
int main()
{
    GradeBook gradebook("C++ Programming","Shi_bo");
    gradebook.displayMessage();
    return 0;
}
