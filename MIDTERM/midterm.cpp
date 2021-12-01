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
