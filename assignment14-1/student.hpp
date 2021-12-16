#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include <string>

using namespace std;

class Student{
  private:
    int sid;
    string sname;
    double scores[3];
    static int NUM_STUDENTS;
    static double TOTAL_SUM;
  public:
    Student() : sid(0), sname(){
      NUM_STUDENTS +=1;
    };
    Student(string n, int id, double sc[]){
      sname = n;
      sid = id;
      for(int i = 0; i < 3; i++){
        scores[i] = sc[i];
        TOTAL_SUM += sc[i];  
      } 
      NUM_STUDENTS += 1;
    };
    int getId(){
      return sid;
    };
    string getName(){
      return sname;
    };
    void getScores(){
      
      for(int i = 0; i < 3; i++){
        cout << "Score " << (i +1) << ": ";
        cout << scores[i] << endl;
      }
      
    };
    static int getNumStudent(){
      return NUM_STUDENTS;
    };
    static double getTotalSum(){
      return TOTAL_SUM;
    };

};

int Student :: NUM_STUDENTS = 0;
double Student :: TOTAL_SUM = 0;

#endif