#include <iostream>
#include "course.hpp"

using namespace std;

Course :: Course(){
  courseID = 0;
  courseName = "No Name";
  courseCredit = 0; 
}

Course :: Course(int ID, string NAME, int CREDIT){
  courseID = ID;
  courseName = NAME;
  courseCredit = CREDIT;
}

void Course :: setID(int ID){
  courseID = ID;
}

void Course :: setName(string NAME){
  courseName = NAME;
}

void Course :: setCredit(int CREDIT){
  courseCredit = CREDIT;
}

int Course :: getID(){
  return courseID;
} 

string Course :: getName(){
  return courseName;
}

int Course :: getCredit(){
  return courseCredit;
}