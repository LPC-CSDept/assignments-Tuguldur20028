#include "stack.hpp"
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack :: stack(){
  vector < int > pool;
  pool.reserve(10);
}; 
stack :: stack1(int n){
  vector < int > pool;
  pool.reserve(n);
}; 
void stack:: clear(){
   pool.clear();
}; 
void stack :: isEmpty(){
  pool.empty();
}; 
void stack :: push(int el){
  pool.push_back(el);
}; 
void stack :: pop(){
  pool.pop_back();
}; 
int stack :: topEl(){
  return pool.back();
};
int stack :: getSize(){
  return pool.size();
};
void stack :: printAll(){
  cout << "The contents of the pool vector are: ";
  for(int i = 0; i < pool.size(); i++){
    cout << pool[i] << endl;
  } 
};