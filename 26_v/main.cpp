#include <iostream>
#include <cmath>

using namespace std;

int main() {

  
  cout << "--------------square root function------------------------\n";
  cout << "Square root value of 64 is : " << sqrt(64) << endl;
  cout << "Square root value of 50 is : " << sqrt(50) << endl;

  cout << "--------------round function------------------------\n";
  cout << "Round of value 2.4 : " << round(2.4) << endl;
  cout << "Round of value 2.5 : " << round(2.5) << endl;
  cout << "Round of value 2.6 : " << round(2.6) << endl;

  cout << "Square root value of 50 : " << sqrt(50) << endl;
  cout << "Round of value sqrt(50) : " << round(sqrt(50)) << endl;


    cout << "--------------power function------------------------\n";
  cout << "Power value:  x^y = (2^4) " << pow(2,4) << endl;
  cout << "Power value:  x^y = (4^3) " << pow(4,3) << endl;

  cout << "--------------ceil/floor functions------------------------\n";
  cout << "Ceiling value of 2.9 : " << ceil(2.9) << endl;
  cout << "Floor value of 2.9 : " << floor(2.9) << endl;
  
  cout << "Ceiling value of -2.9 : " << ceil(-2.9) << endl;
  cout << "Floor value of -2.9 : " << floor(-2.9) << endl;
  
  cout << "--------------absolute value function------------------------\n";
  cout << "Absolute value of 10 : " << abs(10) << endl;
  cout << "Absolute value of -10 : " << abs(-10) << endl;
  

  return 0;
}
