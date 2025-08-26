#include <iostream>

using namespace std;

/*
    #34
    Problem:
    Write a program to ask the user to enter:

    • TotalSales

    The commission is calculated as one percentage * the total sales amount.
    Decide which percentage to use from the following:

    • > 1,000,000       → Percentage is 1%
    • > 500,000 to 1M   → Percentage is 2%
    • > 100,000 to 500K → Percentage is 3%
    • > 50,000 to 100K  → Percentage is 5%
    • Otherwise         → Percentage is 0%

    Example:

    Inputs:
    110,000

    Outputs:
    3,300
*/

int main()
{
  double TotalSales;
  cout << "Enter the total sales: ";
  cin >> TotalSales;
  
  double percentage = 0;


  if (TotalSales > 10000000)
    {
      percentage = 0.01;
    }
  
  else if (TotalSales > 500000 && TotalSales <= 1000000)
    {
      percentage = 0.02;
    }

  else if (TotalSales > 100000 && TotalSales <= 500000)
    {
      percentage = 0.03;
    }
  
  else if (TotalSales > 50000 && TotalSales <= 100000)
    {
      percentage = 0.05;
    }

  double commision = percentage * TotalSales;
  cout << commision << endl;
  
  return 0; 
}


