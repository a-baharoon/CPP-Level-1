#include <iostream>

using namespace std;

/*
    #36
    Problem:
    Write a program to ask the user to enter:

    • Number1
    • Number2
    • OperationType

    Then perform the calculation according to the Operation Type as follows:
    • “+” → Add the two numbers
    • “-” → Subtract the two numbers
    • “*” → Multiply the two numbers
    • “/” → Divide the two numbers

    Example:

    Inputs:
    10
    20
    *

    Outputs:
    200
*/

int main()
{

  int Number1, Number2;

  cout << "Enter Number1: ";
  cin >> Number1;
  
  cout << "Enter Number2: ";
  cin >> Number2;

  
  char Operator;
  cout << "Enter Operator: ";
  cin >> Operator;

  switch (Operator)
  {
  case '+':
    {
      cout << Number1 + Number2 << endl;
      break;
    }
	  
  case '-':
    {
      cout << Number1 - Number2 << endl;
      break;
    }
	  
  case '*':
    {
      cout << Number1 * Number2 << endl;
      break;
    }
	  
  case '/':
    {
      cout << Number1 / Number2 << endl;
      break;
    }
    
  default:
    cout << "Invalid Operator" << endl;
    
  }
  
  return 0; 
}


