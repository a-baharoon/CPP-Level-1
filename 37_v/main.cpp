#include <iostream>
using namespace std;

void MyFunction1(int Num1) {
  Num1 = 7000;
  cout << "Number inside function became= " << Num1 << endl;
}


int main() {
 
  int Num1;
  Num1 = 1000;
  cout << "Hello this is num2! " << Num2 << endl;

  MyFunction1(Num1);
  cout << "Number after calling the function became= " << Num1 << endl;

  cout << Num1 << endl;
  cout << &Num1 << endl;

  return 0;
}
