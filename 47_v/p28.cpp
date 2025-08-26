#include <iostream>

using namespace std;

/*
    #28
    Problem:
    Write a program to sum odd numbers from 1 to N.

    Example:

    Input:
    10

    Outputs:
    25
*/

int OddSumToN(int N)
{
  int sum = 0;
  for (int i = 1; i <= N; i++)
    {
    if (i % 2 != 0)
      {
      sum += i;
      }
    }
  return sum;
}

int main ()
{
  int N;
  cin >> N;
  cout << '\n';
  cout << OddSumToN(N) << endl;
  return 0;
}
