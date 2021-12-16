#include <iostream>
#include "assignment14-3.hpp"
#include <iostream>

using namespace std;

int main() {

  Square josh;
  Rectangle tug;

  josh.setWidth(8); 

  tug = tug.makeRectanglewithSquare(josh);

  cout << tug.getWidth() << endl;
  cout << tug.getHeight()<< endl;
} 