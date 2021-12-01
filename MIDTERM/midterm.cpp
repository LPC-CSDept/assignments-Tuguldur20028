#include <iostream>
#include "numbers.hpp"
#include "students.hpp"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int NumClass::NumberofObjects = 0;
static int POS;

const int N = 10;
void operator>>(fstream& IMPORT, Student& array)
{

  IMPORT.open("MIDTERM/students.txt", ios :: in);

  int sid;
  string name;
  double temp;
  vector <double> scores;

  IMPORT.seekg(POS);
    IMPORT >> sid;
    IMPORT >> name;
    for(int i = 0; i < 3; i++)
    {
      IMPORT >> temp;
      scores.push_back(temp);
    }
      array.setID(sid);
      array.setName(name);
      for(int q  = 0; q < 3; q++)
      {
        array.setScores(scores[q]);
      }
  
  POS = IMPORT.tellg();
  POS += 1;
    
  IMPORT.close();

}

ostream& operator<<(ostream& COUT, Student& E)
{
  COUT << endl;
  COUT << E.getID() << " ";
  COUT << E.getName() << " ";
  COUT << E.getTotalSum() << " ";
  return COUT;
}

void binarySearch(Student array[], int, int);
void bubbleSortbyScores(Student [], int );
void bubbleSortbyID(Student [], int );
int main() {
  cout << "Question 1: " << endl;

  cout << endl;
  
  NumClass Aden(1,10);
  cout << endl;

  NumClass Anthony(2,20);
  
  printNumbers(Aden);
  cout << endl;
  cout << endl;
  printNumbers(Anthony);

  cout << endl;
  cout << endl;

  int ben = Aden > Anthony;

  cout << "Result: " << ben << endl;

  cout << "Total Number of Objects: " << Anthony.getNumberofObjects() << endl;

  cout << " " << endl;
  cout << endl;

  cout << "Question 2: " << endl;

  Student person[N];

  fstream import;

  if(import){
    cout << "File access, Successful!" << endl;
  } else cout << " Not found, Error." << endl;

  int e = 0;

  while(e < N){
    import >> person[e];
    cout << person[e];
    e++;
  }
  bubbleSortbyScores(person, N);

  cout << endl;
  cout << endl;
  cout << "Bubble Sort: " << endl;
  for(int i = 0; i < N; i++){
    cout << i + 1 << "."; 
    cout << person[i] << endl;
  }

  bubbleSortbyID(person, N);

  cout << endl;
  cout << "Please enter the ID number of the students you would like to find: ";
  int ID;
  cin >> ID;
  binarySearch(person, N, ID);
} 

void binarySearch(Student array[], int N, int target)
{
  bool found = false;
  int first = 0;
  int mid;
  int last = N; 
  int result;