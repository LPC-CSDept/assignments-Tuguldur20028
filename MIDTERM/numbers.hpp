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
    static int NumberofObjects;
  public:
    static int getNumberofObjects()
    {
      return NumberofObjects;
    }

  NumClass()
  {
    ID = 0;
    cout << " Object " << ID << " No data " << endl;
    NumberofObjects += 1;
  }

  Numclass(int i, int n)
  {
    srand(time(NULL));
    ID = i;
    for(int i = 0; i < n; i++)
    {
              values.push_back(rand() % 99);
      }
      NumberofObjects += 1;
    }

    int getID()
    {
      return ID;
    }

    void printVector()
    {
      cout << "Object: " << ID << endl;
      if(values.size() == 0)
      {
        cout << "This vector has no data." << endl;
      }
      if(values.size() != 0)
      {
        cout << "Values: " << endl;
        for(int i = 0; i < values.size(); i++)
        {
        cout << values[i] << " ";
        }
      }
    }

    int operator>(const NumClass& n)
    {
      int sum1 = 0, sum2 = 0;
      for(int i = 0; i < n.values.size(); i++)
      {
        sum1+= this -> values[i];
        sum2 += n.values[i];
      }

      cout << "sum1: " << sum1 << " " << "sum2: " << sum2 << endl;
      cout << "If the result is: 1, sum1 is larger." << endl;
      cout << "If the result is: 0, sum1 is not larger." << endl;

      return sum1 > sum2;
    } 


    friend void printNumbers(NumClass n)
    {
      n.printVector();
    };

    friend void totalNumberofObjects()
    {
      cout << "Total number of OBJECTS: " << getNumberOfObjects();
    }
};
    }
  }
}