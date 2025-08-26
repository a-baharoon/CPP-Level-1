#include <iostream>

using namespace std;

int main()
{/*
    #24
    Problem:
    Write a program to ask the user to enter:

    • Age

    If age is between 18 and 45 print “Valid Age”, otherwise print “Invalid Age”
*/
  int Age;
  cout << "Enter Age: ";
  cin >> Age;
  
  if (Age >= 18 && Age <= 45)
    {
      cout << "Valid Age" << endl;
    }
  else
    {
      cout << "Invalid Age" << endl;
    }
  return 0;
}
