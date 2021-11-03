#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class NUMBERS
{
  private:
  int ID;
  vector <int> numbers;
  public:
  NUMBERS(){
    ID = -1;
  }
  NUMBERS(int designation, int groupSize)
  {
    ID = designation;
    for (int i = 0; i < groupSize; i++)
    {
      numbers.push_back(rand() %99);
    }
  }
  int getID()
  {
    cout << "the group's ID is";
    return ID;
  }
  int getSize(){
    cout << "the group's size is";
    return numbers.size();
  }

  int getElm(int i){
    cout << "the requested element  is";
    if (i> numbers.size()){
      cout << "Try the numbers with in the range";
    }
    cin >> i;
    return numbers[i];
  }

  int getMax(){
    int max;
    for (int i = 0; i < numbers.size(); i++){
      max = numbers[0];
      if (numbers[i] > max){
        max = numbers[i];
      }
    } 
    cout << "the largest number in this group is";
    return max;
  }

  int getMin(){
    int min;
    for (int i = 0; i < numbers.size(); i++){
      min = numbers[0];
      if (numbers[i] < min){
        min = numbers[i];
      }
    } 
    cout << "the smallest number in this group is";
    return min;
  }

  int getSum(){
    
  }

  void deleteElm(int d) ;

  void addElm(int a) ;

  void printAll( ) const;



  
}