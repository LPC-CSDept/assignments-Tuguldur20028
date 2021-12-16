#include <iostream>
#include <fstream>
#include "course.cpp"

int partition (Course array[], int , int );
void quickSort(Course array[], int, int );
void swap(int* a, int* b);
void displayArray(Course arr[], int size);

static int POS;
static string fileName;
const int COURSES = 10;

void operator>>(fstream& FILE_IN, Course& array){
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

using namespace std;

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
  
  cout << endl;

  for(int i = 0; i < COURSES; i++){
    FILE_IN >> lessons[i];
    
  }

  int n = sizeof(lessons)/sizeof(lessons[0]);

  quickSort(lessons, 0, n-1);
  
  displayArray(lessons,n);

  cout << "To View the Recursion-Call hierarchy: question2.draw" << n <<  endl;
  
} 

void swap(Course* a, Course* b) 
{ 
    Course t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (Course array[], int low, int high) 
{ 
  int pIndex = low;
  int pivot = array[high].getID();
  int i;
  for(i = low; i < high; i++)
  {
      if(array[i].getID() < pivot)
      {
          swap(&array[i], &array[pIndex]);
          pIndex++;
      }
  }
  swap(&array[high], &array[pIndex]);
  return pIndex;  
} 

void quickSort(Course *array, int low, int high) 
{ 
    if (low < high) 
    { 
        int pivot = partition(array, low, high); 
      
        quickSort(array, low, pivot - 1);
        
        quickSort(array, pivot + 1, high);
    } 
} 

void displayArray(Course array[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << array[i] << endl; 
}