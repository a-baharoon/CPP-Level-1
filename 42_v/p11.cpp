#include <iostream>

using namespace std;

int main()
{/*
    #11
    Problem:
    Write a program to ask the user to enter:

    • Mark1
    • Mark2
    • Mark3

    Then Print the Average of entered Marks, and print “Pass” if average >= 50, otherwise print “Fail”

    Example:

    Inputs:
    90
    80
    70

    Outputs:
    80
    PASS
*/
  
  double Mark1, Mark2, Mark3;

  cout << "Enter Mark1: ";
  cin >> Mark1;

  cout << "Enter Mark2: ";
  cin >> Mark2;

  cout << "Enter Mark3: ";
  cin >> Mark3;

  double average = (Mark1 + Mark2 + Mark3) / 3;

 if (average >= 50)
   {
     cout << "Pass" << endl;
   }
 
 else
   {
     cout << "Fail" << endl;;
   }
 
  return 0;
}
