#include <iostream>
#include <algorithm> // needed to use the sort function.
using namespace std;


int binarySearch(int [], int, int);
// 1st parameter : Integer Array
// 2nd Parameter : Size of the array N
// 3rd Parameter : Taget Value
// Return value and type : the index of the array if the target is in the array. -1 if not found.


int main()
{
	const int N = 10;
	int numbers[N] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70 };
	int target = 35;
	int index;


	index = binarySearch(numbers, N, target );
	if ( index == -1)
		cout << " not found \n";
	else
		cout << " foudn at index : " << index << endl;
}

int binarySearch(int number[], int N, int target)
{
	int first, last, mid;
	first =0;
    last = N-1;
    

	return -1;
}
