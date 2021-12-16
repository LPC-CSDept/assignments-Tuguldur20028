#include <iostream>
#include <fstream>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

void bubbleSortbyID(Students [], int );
int binarySearch(Students [], int, int);
void makeStudents(Students [], int );
void printStudents(Students [], int );

int main()
{
	const int 	N = 10;
	Students 	s[N];
	int 	target, foundidx;

	makeStudents(s, N);
	cout << "Initial Student's Struct Array \n";
	printStudents(s, N);
	bubbleSortbyID(s, N);
	cout << "After Sorting by ID \n";
	printStudents(s, N);

	cout << "Enter the student's ID you want to retrieve : ";
	cin >> target;
	foundidx = binarySearch(s, N, target);
	if ( foundidx == -1)
		cout << " The student's ID " << target << " is not found \n";
	else 
	{
		cout << " The student's name " << s[foundidx].sname << endl << " Scores ";
		for (int i=0; i< NUM_SCORES; i++)
			cout << s[foundidx].scores[i] << "\t" ;
		cout << endl;
	}
	
}

void bubbleSortbyID(Students s[], int N)
{
  for(int i = 0; i < N - 1; i++){
    for(int j= 0; j < N -1; j++){
      if(s[j].sid > s[j + 1].sid)
        swap(s[j].sid, s[j + 1].sid);
    }
  }
}

int binarySearch(Students array[], int N, int target)
{
  bool found = false;
  int first = 0;
  int mid = 0;
  int last = N;
  int result;

  while(first <= last && !found){
    mid = (first + last) / 2;

    if(target > array[mid].sid){
      first = mid + 1;
    }
    else if(target < array[mid].sid){
      last = mid - 1;
    }
    else {
//      cout << "BINARY SEARCH has found the value " << target << " in element "<< mid << "!"<< endl;
      found = true;
      result = mid;
//       result = 1;
    }
  } 

  if(!found){
    result = -1;
//    cout << "The value " << target << " was not found." << endl;
  }

  return result;
}

void makeStudents(Students s[], int N)
{
	ifstream ifs;
	ifs.open("students.txt");
	if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
		ifs >> s[i].sid >> s[i].sname;
		for(int j=0; j<NUM_SCORES; j++)
			ifs >> s[i].scores[j] ;
		if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
	}
}

void printStudents(Students s[], int N)
{
	for(int i=0;i<N;i++)
	{
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		cout << endl;
	}
	cout << "==== End of Record === \n";
}