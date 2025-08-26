#include <iostream>

using namespace std;

int main()
{/*
    #?
    Problem:
    Write a program to read the ATM PIN code from the user, then check:

    • If PIN Code = 1234, show the balance to user
    • Otherwise, print “Wrong PIN” and ask the user to enter the PIN again

    Assume User Balance is 7500

    Example:

    Inputs:
    1234
    5151

    Outputs:
    Your Balance is: 7500
    Wrong PIN
*/

  double Balance = 7500;
  int PIN_CODE;

  cout << "Enter your PIN Code: ";
  cin >> PIN_CODE;

  if (PIN_CODE == 1234)
    {
      cout << "Your Balance is: 7500" << endl;
    }
  
  else
    {
      cout << "Wrong PIN" << endl;
    }
  
  
  return 0;
}
