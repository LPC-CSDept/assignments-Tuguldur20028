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
  
  }  bubbleSortbyID(lessons, COURSES);

  for(int i = 0; i < COURSES; i++){
    
    cout << lessons[i].getID() << endl;
  }

  cout << "Enter a ID number to get course details: ";
  cin >> find;
  
  int size = sizeof(lessons)/sizeof(lessons[0]);

  Course result;

  result = recursiveBinarySearch(find, lessons, 0, COURSES-1);
  
  cout << endl;
  cout << "Recursive Search Found: " << endl;
  cout << result;

  cout << endl;
  
  result = iterativeBinarySearch(lessons,size-1,find);
  cout << endl;
  cout << "Iterative Search Found: " << endl;
  cout << result;

} 

Course recursiveBinarySearch(int target, Course array[], int first, int last){
  Course retry;

  if(first > last)
    return Course();
  else{
    int middle = (first + last) / 2;
    if(target == array[middle].getID())
      retry = array[middle];
    else if (target < array[middle].getID())
      retry = recursiveBinarySearch(target, array, first, middle - 1);
    else 
      retry = recursiveBinarySearch(target, array, middle + 1, last);
  }  

  return retry;
}

Course iterativeBinarySearch(Course array[], int N, int target){
  bool found = false;
  int first = 0;
  int mid = 0;
  int last = N;
  Course result;

  while(first <= last && !found){
    mid = (first + last) / 2;
    if(target > array[mid].getID())
      first = mid + 1;
    else if(target < array[mid].getID())
      last = mid - 1;
    else if(target == array[mid].getID()) {
      found = true;
      result = array[mid];
    }
  }
  return result;
}
void bubbleSortbyID(Course array[], int N){
  for(int i = 0; i < N; i++){
    for(int q = 0; q < N; q++){
      Course temp;
      if(array[i].getID() < array[q].getID()){
        temp = array[i];
        array[i] = array[q];
        array[q] = temp;
      }
    }
  }
};

