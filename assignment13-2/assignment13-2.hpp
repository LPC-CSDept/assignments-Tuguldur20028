#ifndef 	NUMBERS_H
#define 	NUMBERS_H

using namespace std;



class Numbers{
  private:
    int size;
    int *head;

  public:
    Numbers();
    Numbers(int);
      
    int getSize()const;
    int getElement(int i) const;
    double getSum() const;
    double getAvg(); const;
    void setElements();
    void setElements(int i , value);
    void bubbleSort(dessc:int);
    void printNumbers(desc:int)
      clear();
     

};