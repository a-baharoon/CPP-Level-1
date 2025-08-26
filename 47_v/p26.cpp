#include <iostream>

using namespace std;

/*
    #26
    Problem:
    Write a program to print numbers from 1 to N.

    Example:

    Input:
    10

    Outputs:
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
*/

void NumbersToN(int N)
{
  for (int i = 1; i <= N; i++)
    {
    cout << i << endl;
    }
}

int main ()
{
  int N;
  cin >> N;
  cout << '\n';
  NumbersToN(N);
  return 0;
}
