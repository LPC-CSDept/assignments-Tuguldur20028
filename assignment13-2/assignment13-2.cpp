#include "assignment13-2.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

  
Numbers(){
  *head = new int[10];
}

Numbers(int n);{
  *head = new int[n];
}
.
int Numbers :: getSize()const{
  return sizeof(head);
}

int Numbers:: getElement(int i) {
  return head[i];
}
 
double Numbers:: getSum() const {
  int total = 0;
  for(int i = 0; i < sizeof(head); i++){
    int sum = 0;
    sum = head[i];
    total += sum;
  }
  return total;
}

double Numbers:: getAvg() const{
  int total = getSum();
  return total / sizeof(head);
}

void Numbers:: setElements() {
  for(int i = 0; i < sizeof(head); i++)
    head[i] = rand() % 101;
}
void Numbers:: setElements(int i , value){
  head[i] = value;
}

void Numbers:: bubbleSort(dessc:int){
  for(int i = 0; i < sizeof(head)- 1; i++){
    for(int j = 0; j < sizeof(head) -1; j++){
      swap(head[j], head j+1);
    }
  }
}
void Numbers:: printNumbers(desc:int);
  for(int i  = 0; i < size0f(head); i++){
    cout << head[i] << endl;
  }
