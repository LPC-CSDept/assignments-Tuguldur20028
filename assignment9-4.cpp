#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct students {
 int id, sum;
 string name;
 double score[3];
 double scoreavg;
};

void printArray(students*,int);
void sortArray(students*, int);

int main() {
  
  fstream newfile;

  students *firstclass;
  firstclass = new students[10];
  int input;
  
  newfile.open("students.txt", ios:: in);

  if(newfile){
    cout << "File has been opened and read." << endl;
  }

  while(!newfile.eof()){
    for(int i = 0; i < sizeof(newfile); i++){
      newfile >> (firstclass + i) -> id;

      newfile >> (firstclass + i) -> name;

      for(int j = 0; j < 3;j++){
        newfile >> (firstclass + i) -> score[j];
      }
      
    } 
    newfile.close();
  } 

  if(!newfile){
    cout << "File has been closed" << endl;
    cout << endl;
  }

  sortArray(firstclass, 10);
  printArray(firstclass,10);

}

void printArray(students * print, int size){
  for(int i = 0; i < size; i++){
    cout << print[i].id << " ";
    cout << print[i].name << " ";
    for(int j = 0; j < 3;j++){
      cout << print[i].score[j] << " ";
    }
    cout << endl;
  }

  cout << endl;
}

void sortArray(students* sort, int size){
  for(int i = 0; i < size - 1; i++){
    if(sort[i].score[1] < sort[i].score[2]){
        int temp;
        temp = sort[i].score[1];
        sort[i].score[1] = sort[i].score[2];
        sort[i].score[2] = temp;
      }
    if(sort[i].score[0] < sort[i].score[1]){
        int temp;
        temp = sort[i].score[0];
        sort[i].score[0] = sort[i].score[1];
        sort[i].score[1] = temp;
      }
    if(sort[i].score[1] < sort[i].score[2]){
        int temp;
        temp = sort[i].score[1];
        sort[i].score[1] = sort[i].score[2];
        sort[i].score[2] = temp;
      }
  }
}