#include <iostream>
#include "productworker.hpp"

using namespace std;

void ProductWorker :: setShift(int SHIFT){
  shift = SHIFT;
};
void ProductWorker :: setPay(double money){
  hourlyPayRate = money;
};
int ProductWorker :: getShift(){
  return shift;
};
double ProductWorker :: getPay(){
  return hourlyPayRate;
};