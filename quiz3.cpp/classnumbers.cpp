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

}