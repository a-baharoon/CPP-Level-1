#include <iostream>
using namespace std;

/*
    #46
    Problem:
    Write a program to print all letters from A to Z

    Outputs:
    A
    B
    C
    .
    .
    .
    Z
*/

void PrintLetters ()
{
  for (int i = 65; i < 91; i++)
    {
      cout << (char) i << endl;
    }
}

int main()
{
  PrintLetters();
}



