#include "student.hpp"
#include <iostream>
using namespace std;




int main(){

  double r[] = {80, 85, 90};
  double p[] = {90, 100.0, 85};
  double f[] = {75, 60, 65};

  Student s1("Tug", 1111111, p);

  Student s2("Stellar", 2222222, r);

  Student s3("Ray", 1234567, f);


  cout <<  "Students name: "<< s2.getName() << endl;
  cout << "Student ID: " <<s2.getId() << endl;
  s2.getScores();

  

  cout << endl;

  cout <<  "Students name: "<< s1.getName() << endl;
  cout << "Student ID: " <<s1.getId() << endl;
  s1.getScores();

  cout << endl;

  cout <<  "Students name: "<< s3.getName() << endl;
  cout << "Student ID: " <<s3.getId() << endl;
  s3.getScores();

  cout << "===================================================================" << endl;

  cout << "Students in class: " << Student :: getNumStudent();
  cout << endl;
  cout << "Th Total sum on the scores is: " << Student :: getTotalSum();
}
