#ifndef NUMBERS_H
#define NUMBERS_H

#include <ctime>
#include <vector>

using namespace std;
class NumClass
{
  private:
    int ID;
    vector <unsigned int> values;
    static int Numberofobjects;
  public:
    static int getNumberofobjects()
    {
      return Numberofobjects;
    }

  NumClass()
  {
    ID = 0;
    cout << " Object " << ID << " No data " << endl;
    Numberofobjects += 1;
  }

  Numclass
}