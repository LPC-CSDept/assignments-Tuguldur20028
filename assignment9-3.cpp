#include <iostream>
#include <ctime>
using namespace std;

double *makeArray(int bunch );
void printArray(double *, int);
void sortArray(double *, int);
void deleteArray(double *);

int main(){
  const int bunch = 10;
  double *market = makeArray(bunch);
  
  printArray(market, bunch);
  sortArray(market, bunch);
  printArray(market, bunch);
  deleteArray(market);
}

double *makeArray(int bunch){
  srand(time(0));
  double *apple =  new double[bunch];
  for(int i = 0; i < bunch; i++){
    apple[i] = rand() % 101 * .7;
  }
  return apple;
}

void printArray(double * print, int size){
  for(int i = 0; i < size; i++){
    cout << print[i] << " ";
  }

  cout << endl;
}

void sortArray(double *array, int size){
  for(int i = 0; i < size - 1; i++){
    for(int j = 0; j < size -1; j++){
      if(array[j] > array[j + 1])
        swap(array[j], array[j + 1]);
    }
  }
}

void deleteArray(double *array){
  delete array;
}