#include <iostream>

using namespace std;

/*
    #44
    Problem:
    Write a program to ask the user to enter:

    • Day

    Then print the day as follows:
    • 1 → Print Sunday
    • 2 → Print Monday
    • 3 → Print Tuesday
    • 4 → Print Wednesday
    • 5 → Print Thursday
    • 6 → Print Friday
    • 7 → Print Saturday
    • Otherwise → Print “Wrong Day” and ask the user to enter the day again

    Example:

    Inputs:
    6

    Outputs:
    Its Friday
*/

int main()
{
    int Day;

    cout << "Enter Day (1-7): ";
    cin >> Day;

    switch (Day)
    {
      
    case 1:
       {
        cout << "Its Sunday" << endl;
	break;
       }
    
    case 2:
    {
        cout << "Its Monday" << endl;
	break;
    }
    
    case 3:
    {
        cout << "Its Tuesday" << endl;
	break;
    }
    
    case 4:
    {
        cout << "Its Wednesday" << endl;
	break;
    }
    
    case 5:
    {
        cout << "Its Thursday" << endl;
	break;
    }
    
    case 6:
    {
        cout << "Its Friday" << endl;
	break;
    }
    
    case 7:
    {
        cout << "Its Saturday" << endl;
	break;
    }
    
    default:
    {
        cout << "Wrong Day, please enter a valid day (1-7)." << endl;
    }
    }
    
    return 0;
}
