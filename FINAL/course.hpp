#ifndef COURSE_H
#define COURSE_H

using namespace std;

class Course{
  private:
    int courseID;
    string courseName;
    int courseCredit;
  public:
    Course();
    Course(int ID, string NAME, int CREDIT);
    void setID(int ID);
    void setName(string NAME);
    void setCredit(int CREDIT);
    int getID();
    string getName();
    int getCredit();
};

#endif