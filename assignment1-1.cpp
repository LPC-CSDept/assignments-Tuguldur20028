#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct students {
 int id, sum;
 string name;
 double score1,score2;
 double scoreavg;
};

void findstudents(students classes[]);


int main() {
  fstream newfile;

  students firstclass[10];
  int input;
  
  newfile.open("students.txt", ios:: in);

  if(newfile){
    cout << "File has been opened and read." << endl;
  }

  while(!newfile.eof()){
    for(int i = 0; i < sizeof(newfile); i++){
      newfile >> firstclass[i].id;

      newfile >> firstclass[i].name;

      newfile >> firstclass[i].score1;

      newfile >> firstclass[i].score2;
      
    } 
    newfile.close();
  } 

  if(!newfile){
    cout << "File has been closed" << endl;
    }


  for(int i = 0; i < 10; i++){
    firstclass[i].sum = firstclass[i].score1 + firstclass[i].score2;
    firstclass[i].scoreavg = (firstclass[i].sum) / 2;
    
  }
    findstudents(firstclass);

  newfile.open("students.txt", ios:: out);

  if(newfile){
    cout << "File has been opened for writing." << endl;
  }

  for(int i = 0; i < 10; i++){
    newfile << firstclass[i].id;
    newfile << " ";
    newfile << firstclass[i].name;
    newfile << " ";
    newfile << firstclass[i].score1;
    newfile << " ";
    newfile << firstclass[i].score2;
    newfile << " ";
    newfile << firstclass[i].sum;
    newfile << " ";
    newfile << firstclass[i].scoreavg << endl;
    
  } 
  
  newfile.close();
  
  if(!newfile){
    cout << "File has been closed" << endl;
  }
  
}

void findstudents(students classes[]){
  int input;
  while(input != 0){
    cout << "Please enter a student ID or enter ZERO to quit." << endl;
    cin >> input;
    for(int i = 0; i < 10; i++){
      if(input == classes[i].id){
        cout << "Student information found" << endl;
        cout << endl;
        cout << "Student Number: " << "Student Name: " << "First Score: " << "Second Score: " << "Sum of score: " << "Score Average: " << endl;
        cout << classes[i].id << setw(11)<< " " << classes[i].name << setw(10)<<  " " << classes[i].score1 << setw(10)<< " " << classes[i].score2 << setw(12)<< " " << classes[i].sum << setw(10) << " "<< classes[i].scoreavg;
        cout << endl;
        cout << endl;
      }
    }
  }
}