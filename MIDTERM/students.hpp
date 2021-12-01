#ifndef 	STUDENT_H
#define 	STUDENT_H

#include <string>
 
class Student{
  private:
    int ID;
    string name;
    vector <double> score;
  public:
    Student(){
      ID = 0;
      name = "No Data";
    };
    Student(int sID, string sName, vector <int> & E){
      ID = sID;
      name = sName;
      for(int i = 0; sizeof(E); i++){
        score.push_back(E[i]);
      }
    }
    void setScores(double q){
      score.push_back(q);
    };

    void setName(string sName){
      name = sName;
    }
    void setID(int sID){
      ID = sID;
    }
    
    void getScores(){
      for(int i = 0; i < score.size(); i++){
       cout << "Score " << i << " : " << score[i];
      };
    };

    string getName(){
      return name;
    }

    int getID() {
      return ID;
    }

    int getTotalSum(){
      int total = 0;
      for(int i =0; i < 3; i++){
        total += score[i];
      }
      return total;
    }
};
