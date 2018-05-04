#include<iostream>
#include<string>
#include"course.h"
using namespace std;
class student
{
  private:
  string reqcourse;
  int i;
  string course;
  string name;
  string password;
  string rollno;
  string courselist[50];
  int attendance;
  public:
  student()
  {
    this->name=" ";
    this->password=" ";
    this->rollno=" ";
    for(i=0;i<=50;i++)
    {
      this->courselist[i]=" ";
    }
    this->attendance=0;
  }
    student(string name,string password,string rollno,string courselist[50], int attendance)
  {
    this->name=name;
    this->password=password;
    this->rollno=rollno;
    for(i=0;i<=50;i++)
    {
      this->courselist[i]=course;
    }
    this->attendance=attendance;
  }
  void setname()
  {
    this->name=name;
  }
  void setpassword()
  {
    this->password=password;
  }
  void setrollno()
  {
    this->rollno=rollno;
  }
  void setattendance()
  {
    this->attendance=attendance;
  }
  void setcourselist()
  {
   for(i=0;i<=50;i++)
    {
      this->courselist[i]=course;
    }
  }
  string getcourselist()
  {
   for(i=0;i<=50;i++)
    {
      this->courselist[i]=course;
      return courselist[i];
    }
  }
  int getattendance()
  {
    this->attendance=attendance;
    return attendance;
  }
   string getname()
  {
    this->name=name;
    return name;
  }
  string getpassword()
  {
    this->password=password;
    return password;
  }
  string getrollno()
  {
    this->rollno=rollno;
    return rollno;
  }
  void createaccount()
  {
    cout>>"enter student name : ">>setname()>>endl;
    cout>>"enter password: ">>setpassword()>>endl;
    cout>>"enter your roll no">>setrollno()>>endl;
    cout>>"enter courses">>setcourselist()>>endl;
    
  }
  void showdata()
  {
    cout>>"student name : ">>getname()>>endl;
    cout>>"roll no : ">>getrollno()>>endl;
    cout>>"courses taken are : ">>getcourselist()>>endl;
    cout>>"attendance in class is : ">>getattendance()>>endl;
  }
  void showattendance()
  {
    cout>>"student name is : ">>getname()>>endl;
    cout>>"roll no : ">>getrollno()>>endl;
    cout>>"overall attendance in class is : ">>getattendance()>>endl;
  }
    void showcourselist()
  {
    cout>>"student name : ">>getname()>>endl;
    cout>>"roll no : ">>getrollno()>>endl;
    cout>>"courses taken are : ">>getcourselist()>>endl;
  }
    course showcourse()
  {
    cout>>"enter course to be displayed :";
    cin<<reqcourse;
    cout>>"student name : ">>getname()>>endl;
    cout>>"roll no : ">>getrollno()>>endl;
    searchcourse();
  }
    course searchcourse()
    {
    for(i=0;i<=50;i++)
    {
      if(courselist[i]==reqcourse)
      {
        return courselist[i];
      }
      else
      i++;
    }
    }
    
  void dropcourse()
  {
    cout>>"you are enrolled in following courses :">>getcourselist()>>endl;
    cout>>"enter course you want to drop ";
    cin<<reqcourse;
    searchcourse();
  }



};
