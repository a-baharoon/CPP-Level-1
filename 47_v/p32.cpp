#include <iostream>
using namespace std;

/*
    #32
    Problem:
    Write a program to ask the user to enter:

    • Number
    • M

    Then Print the Number^M

    Example:

    Inputs:
    2
    4

    Outputs:
    16
*/

int Exponent(int Number, int M)
{
  int Expo = 1;
  for (int i = 0; i < M; i++)
    {
     Expo *= Number;
    }
  return Expo;
}

int main()
{
  cout << Exponent(2, 4) << endl;
}



