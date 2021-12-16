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
  