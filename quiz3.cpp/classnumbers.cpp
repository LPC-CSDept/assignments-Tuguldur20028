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
    cout << "the group ID is";
    return ID;
  }
  int getSize() const;

int getElm(int i) const;

int getMax() const ;

int getMin() const;

int getSum() const;

void deleteElm(int d) ;

void addElm(int a) ;

void printAll( ) const;



  
}