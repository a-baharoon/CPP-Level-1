#include <iostream>

using namespace std;

int main() {

  int A = 0;
  cout << "Please enter the first number A? ";
  cin >> A;

  int B = 0;
  cout << "Please enter the second number B? ";
  cin >> B;

  
  cout << A << " = " << B << " is " <<  (A == B) << endl;
  cout << A << " != " << B << " is " << (A != B) << endl;

  cout << A << " > " << B << " is " << (A > B) << endl;
  cout << A << " < " << B << " is " << (A < B) << endl;
  
  cout << A << " >= " << B << " is " << (A >= B) << endl;
  cout << A << " <= " << B << " is " << (A <= B) << endl;
  


  return 0;
}
