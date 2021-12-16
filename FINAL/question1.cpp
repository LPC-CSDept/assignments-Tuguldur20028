#include <iostream>
#include <fstream>
#include "course.cpp"

Course recursiveBinarySearch(int , Course array[], int , int );
Course iterativeBinarySearch(Course array[], int, int);
void bubbleSortbyID(Course array[], int );

using namespace std;

static int POS;
static string fileName;
const int COURSES = 10;

void operator >>(fstream& FILE_IN, Course& array){
  int id;
  string name;
  int credit;
   
  FILE_IN.open(fileName, ios :: in);

  FILE_IN.seekg(POS);

  FILE_IN >> id;
  FILE_IN >> name;
  FILE_IN >> credit;

  array.setID(id);
  array.setName(name);
  array.setCredit(credit);

  POS = FILE_IN.tellg();
  POS += 1;

  FILE_IN.close();
}
ostream& operator<<(ostream& COUT, Course& LESSONS){
  COUT << LESSONS.getID() << " ";
  COUT << LESSONS.getName() << " ";
  COUT << LESSONS.getCredit() << " ";
  return COUT;
}

int main() {

  fstream FILE_IN;
  Course lessons[10];
