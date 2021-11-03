#include <iostream>
using namespace std;

int main()
{

	int num = 100;
	int &ref = num;

  cout << "address of num" << &num << endl;
  cout << "address of ref" << &ref << endl;

  int *ptr = &ref;
	
  *ptr = 200;
	

	cout << "The ref val " << ref << endl;
}