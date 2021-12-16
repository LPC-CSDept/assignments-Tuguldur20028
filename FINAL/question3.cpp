#include <iostream>
#include <fstream>
#include "productworker.cpp"

using namespace std;

static int POS;
static string fileName;
static double maxPay = 0;

ostream& operator<<(ostream& COUT, Employee& worker)
{
  return COUT;
}
ostream& operator<<(ostream& COUT, ProductWorker& worker){
  COUT << "Name: " << worker.getName() << endl;
  COUT << "ID number: " << worker.getID()<< endl;
  COUT << "Hire Date: " << worker.getHired()<< endl;
  COUT << "Shift: " << worker.getShift()<< endl;
  COUT << "Pay: " << worker.getPay()<< endl;
  return COUT;
}

double operator > (const ProductWorker &Q, const ProductWorker &F){
  cout << "Who is paid more?" << endl;
  cout << Q.employeeName << "'s Pay: " << Q.hourlyPayRate << endl;
  cout << F.employeeName << "'s Pay: " << F.hourlyPayRate;
  cout << " " << endl;
  cout << "If the result is: 1, " <<Q.employeeName << " is paid more." << endl;
  cout << "If the result is: 0, " <<Q.employeeName << " is not paid more." << endl;
  return Q.hourlyPayRate > F.hourlyPayRate;
}
