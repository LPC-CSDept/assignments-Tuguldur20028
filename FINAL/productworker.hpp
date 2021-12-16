#ifndef PRODUCTWORKER_H
#define PRODUCTWORKER_H

#include "employee.cpp"


using namespace std;

class ProductWorker : public Employee{
 protected:
    int shift;
    double hourlyPayRate;
  public:
    ProductWorker() : Employee(){
    };
    
    void setShift(int SHIFT);
    void setPay(double money);
    int getShift();
    double getPay();
  friend class Employee;  
  friend ostream& operator<<(ostream& COUT, ProductWorker& worker);
  friend double operator > (const ProductWorker &Q, const ProductWorker &F);
};

#endif