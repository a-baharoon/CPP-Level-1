#include <iostream>

using namespace std;

/*
    #?
    Problem:
    Write a program to ask the user to enter:

    • Grade

    Then print the grade as follows:
    • 90 – 100  →  Print A
    • 80 – 89   →  Print B
    • 70 – 79   →  Print C
    • 60 – 69   →  Print D
    • 50 – 59   →  Print E
    • Otherwise →  Print F

    Example:

    Inputs:
    95

    Outputs:
    A
*/

int main()
{
  double Grade;
  cout << "Enter grade: ";
  cin >> Grade;

  if (Grade >= 90 && Grade <= 100)
    {
      cout << "A" << endl;
    }
  
  else if (Grade >= 80 && Grade <= 89)
    {
      cout << "B" << endl;
    }

  else if (Grade >= 70 && Grade <= 79)
    {
      cout << "C" << endl;
    }
  
  else if (Grade >= 60 && Grade <= 69)
    {
      cout << "D" << endl;
    }

  else if (Grade >= 50 && Grade <= 59)
    {
      cout << "E" << endl;
    }
  
  else
    {
      cout << "F" << endl;
    }
  
  return 0; 
}


