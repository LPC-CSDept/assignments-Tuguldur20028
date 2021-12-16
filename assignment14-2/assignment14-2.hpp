#ifndef ASSIGNMENT14-2_H
#define ASSIGNMENT14-2_H

#include <iostream>
#include <vector> 
#include <ctime>

using namespace std;

class Student{
  private:
    int sid;
    string sname;
    vector <double> score;
  public:
  Student(){
    sid = 0;
    sname = "No_Name";
    };
  
  Student(string n, int id, vector <double> &sc){
    sname = n;
    sid = id;
    for(int i = 0; i < sc.size(); i++){
      score.push_back(sc[i]);
    }
  };
  void setID(int id){
    sid = id;
  }
  void setName(string name){
    sname = name;
  }
  void setScores(vector <double> &sc){
    for(int i = 0; i < sc.size(); i++){
      score.push_back(sc[i]);
    }
  }
  void getScore(){
    cout << "Scores: ";
    for(int i = 0; i < score.size(); i++){
      cout << score[i] << endl;
    }
  }
  string getName(){
    return sname;
  }
  int getID(){
    return sid;
  }
  friend class Student;
  friend int largerTotalScore(Student& x ,Student& y){
    double xTotal = 0;
    double yTotal = 0;
    int master;
    for(int i = 0; i < 5; i++){

      xTotal += x.score[i];
      yTotal += y.score[i];
    }
    if(xTotal < yTotal){
      cout << "from the second peramiter: ";
      master = yTotal;
      }
    else if(yTotal < xTotal){
      cout << "from the first peramiter: ";
      master = xTotal;
    }
    return master;
  }

  friend void printStudent(Student s){
    cout << "Student ID: " << s.getID() << endl;
    cout << "Student Name: " << s.getName() << endl;
    
    s.getScore(); 
  }
};