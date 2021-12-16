#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  const int N = 10;
  double number[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.51, 13.8, 14.7, 19.8, 20.0};
  double *ptr;

  cout << "Memory addresses: " << endl;
  
  
  for(int i = 0; i < N; i++){
    ptr = number; 
    cout << ptr + i << endl;
    cout << "The MEMORY ADDRESS of element (" << i << ") is: " << &ptr[i] << endl; 
  }

  cout << "Element contents: " << endl;

  ptr = number; 
  ptr = number[i]; 
  
  for(int i = 0; i < N; i++){
  

    cout << "The element (" << i << ") of the array number contains ; " << ptr[i]  << endl;
	
  }

   cout << "Data stored in the memory address: ";
   cout << *number << endl; 
   cout << endl;
   cout << "Memory address: ";
   cout << &number << endl;
   cout << "Pointer: ";
   cout << ptr;

  return 0;
}
