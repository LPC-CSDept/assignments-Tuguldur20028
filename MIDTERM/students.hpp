#ifndef 	STUDENT_H
#define 	STUDENT_H


#include <string>
 
class Student{
  private:
    int ID;
    string name;
    vector <double> score;
  public:
    Student(){
      ID = 0;
      name = "No Data";
    };
    