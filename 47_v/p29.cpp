#include <iostream>

using namespace std;

/*
    #29
    Problem:
    Write a program to sum even numbers from 1 to N.

    Example:

    Input:
    10

    Outputs:
    30
*/

int EvenSumToN(int N)
{
  int sum = 0;
  for (int i = 1; i <= N; i++)
    {
    if (i % 2 == 0)
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
  cout << EvenSumToN(N) << endl;
  return 0;
}
