#include <iostream>
#include "employee.hpp"

using namespace std;

Employee :: Employee(){
  employeeName = "No data";
  employeeNumber = 0;
  hireDate = "No Data";
};

Employee :: Employee(string name, int id, string hired){
  employeeName = name;
  employeeNumber = id;
  hireDate = hired;
};

void Employee :: setName(string name){
  employeeName = name;
}

void Employee :: setID(int id){
  employeeNumber = id;
}

void Employee :: setHired(string hired){
  hireDate = hired;
}

string Employee :: getName(){
  return employeeName;
} 

int Employee :: getID(){
  return employeeNumber;
}

string Employee :: getHired(){
  return hireDate;
}
