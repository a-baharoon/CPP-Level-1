#include <iostream>

using namespace std;

/*
    #45
    Problem:
    Write a program to ask the user to enter:

    • Month

    Then print the month as follows:
    • 1  → Print January
    • 2  → Print February
    • 3  → Print March
    • 4  → Print April
    • 5  → Print May
    • 6  → Print June
    • 7  → Print July
    • 8  → Print August
    • 9  → Print September
    • 10 → Print October
    • 11 → Print November
    • 12 → Print December
    • Otherwise → Print “Wrong Month” and ask the user to enter the Month again

    Example:

    Inputs:
    11

    Outputs:
    November
*/

int main()
{
    int Month;

    cout << "Enter Month (1-12): ";
    cin >> Month;
    switch (Month)
  {
    case 1:
    {
        cout << "January" << endl;
	break;
    }

    case 2:
    {
        cout << "February" << endl;
	break;
      }

    case 3:
    {
        cout << "March" << endl;
	break;
    }

    case 4:
    {
        cout << "April" << endl;
	break;
    }
    
    case 5:
    {
        cout << "May" << endl;
	break;
    }
    
    case 6:
    {
        cout << "June" << endl;
	break;
    }
    
    case 7:
    {
        cout << "July" << endl;
	break;
    }
    
    case 8:
    {
        cout << "August" << endl;
	break;
    }
    
    case 9:
    {
        cout << "September" << endl;
	break;
    }
    
    case 10:
    {
        cout << "October" << endl;
	break;
    }
    
    case 11:
    {
        cout << "November" << endl;
	break;
    }
    
    case 12:
    {
        cout << "December" << endl;
	break;
    }
    
    default:
    {
        cout << "Wrong Month, please enter a valid month (1-12)." << endl;
    }
  }
    return 0;
}
