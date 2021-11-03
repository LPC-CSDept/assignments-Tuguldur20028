#include <iostream>
#include <algorithm> // needed to use the sort function.
using namespace std;

int main()
{
	const int N = 10;
	int numbers[N] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
	int target = 35;

  int index;

  index = binarySearch (numbers, N, target );
  if (index== -1)
    cout << " not found \n";
  
  else
    cout << " found at index : " << index << endl;



