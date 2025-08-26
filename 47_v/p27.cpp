#include <iostream>

using namespace std;

/*
    #27
    Problem:
    Write a program to print numbers from N to 1.

    Example:

    Input:
    10

    Outputs:
    10
    9
    8
    7
    6
    5
    4
    3
    2
    1
*/

void NumberToOne(int N)
{
  for (N; N > 0; N--)
    {
    cout << N << endl;
    }
}

int main ()
{
  int N;
  cin >> N;
  cout << '\n';
  NumberToOne(N);
  return 0;
}
