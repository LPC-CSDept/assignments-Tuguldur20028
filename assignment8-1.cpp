#include <iostream>

using namespace std;

int binarySearch(int array[], int, int);

const int SIZE = 15;

int main(){
   
  int pool[] = {10, 25, 30, 35, 40, 45, 55, 60, 65, 70};
  int target;
  int results;

  cout << "What number would you like to search for? " << endl;
  cout << "Search for: "; cin >> target;

  cout << endl;

  results = binarySearch(pool, SIZE, target);

   if ( results != -1)
      cout << "BINARY SEARCH has found the value " << target << " in element "<< results << "!"<< endl;
   else
        cout << "The value " << target << " was not found." << endl;

}

int binarySearch(int array[], int N, int target){
  bool found = false;
  int first = 0;
  int mid = 0;
  int last = N;
  int result;

  while(first <= last && !found){
    mid = (first + last) / 2;

    if(target > array[mid]){
      first = mid + 1;
    }
    else if(target < array[mid]){
      last = mid - 1;
    }
    else {
      found = true;
      result = mid;
    }
  } 

  if(!found){
    result = -1;
  }

  return result;
}