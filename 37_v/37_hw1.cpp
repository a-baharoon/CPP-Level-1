#include <iostream>
// Function Parameters By Value vs By Reference.
// We have learnt how to correct the swap algorithm in previous home work.
// Now the function does its job globally.
using namespace std;

void myFunction(int Num1) 
{
	Num1 = 7000;
	cout << "Number inside function became= " << Num1 << endl;
}

void swapNumbers(int &num1, int &num2)
{
  int  temp;

  temp = num1;
  num1 = num2; 
  num2 = temp;
}

int main () 
{
  // before swapping
  int num1 = 9, num2 = 5; 
  cout << "num1 = " << num1 << " || " ;
  cout << "num2 = " << num2 << endl;

  // after swapping
  swapNumbers(num1, num2);
  cout << "num1 = " << num1 << " || ";
  cout << "num2 = " << num2 << endl;
  
  return 0; 
}
