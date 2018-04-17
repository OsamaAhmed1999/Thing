#include <iostream>
#include "Thing.h"
using namespace std;

int main()
{
  Thing A(1,2,3);
  cout << "A";
  A.display();
  cout << endl;

  Thing B=A;
  cout << "B";
  B.display();
  cout << endl;

  Thing C;
  C=A;
  cout << "C";
  C.display();
  cout << endl;

  A.set(4,5,6);
  cout << endl << "Setting A" << endl;

  cout << "A" << A << endl;
  cout << "B" << B << endl;
  cout << "C" << C << endl;

  system("pause");
}