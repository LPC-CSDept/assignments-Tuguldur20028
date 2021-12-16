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
  int selection;
  cout << "Please choose the file to search: " << endl;
  cout << "1. classcourse.txt" << endl;
  cout << "2. classcourse2.txt" << endl;
  cout << "3. classcourse3.txt" << endl;
  cout << endl;
  cout << "Search file: ";
  cin >> selection;

  cout << endl;

  switch(selection){
    case 1: fileName = "FINAL/classcourse.txt";
            cout << "Searching classcourse.txt" << endl;
            break;
    case 2: fileName = "FINAL/classcourse2.txt";
            cout << "Searching classcourse2.txt" << endl;
            break;
    case 3: fileName = "FINAL/classcourse3.txt";
            cout << "Searching classcourse3.txt" << endl;
            break;
    default: cout << "File selection is not valid, try different file." << endl;
  }

  int find;
  
  cout << endl;

  cout << "Course ID List: " << endl;
  for(int i = 0; i < COURSES; i++){
    FILE_IN >> lessons[i];
  
  }
  
