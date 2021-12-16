#include <iostream>
#include <fstream>
#include "course.cpp"

Course recursiveBinarySearch(int , Course array[], int , int );
Course iterativeBinarySearch(Course array[], int, int);
void bubbleSortbyID(Course array[], int );

using namespace std;

static int POS;
static string fileName;
const int COURSES = 10;
