#include <iostream>
using namespace std;

enum enWeekDay {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

void  ShowWeekDayMenu()
    {
      cout << "*************************\n";
      cout << "\tWeek Days\n";
      cout << "*************************\n";

      cout << "1: Sunday\n";
      cout << "2: Monday\n";
      cout << "3: Tuesday\n";
      cout << "4: Wednesday\n";
      cout << "5: Thursday\n";
      cout << "6: Friday\n";
      cout << "7: Saturday\n";
      cout << "*************************" << endl;

      cout << "Please enter the of the day: ";
	 
    }

enWeekDay ReadWeekDay ()
{
  //  enWeekDay WeekDay;  THIS LINE IS USELESS; Since WeekDay was not used at all in the function. 
  int WD;
  cin >> WD;

  return (enWeekDay) WD;
}

string GetWeekDayName(enWeekDay WeekDay)
{
  /*
    break statement is commented since the return immiedatily exits
    the function so there is no point in adding a break.
  */
  
  switch (WeekDay)
   {
    case enWeekDay::Sun:
      {
	return "Sunday";
	// break;
      }
      
    case enWeekDay::Mon:
      {
	return "Monday";
	// break;
      }
      
    case enWeekDay::Tue:
      {
	return "Tuesday";
	// break;
      }

    case enWeekDay::Wed:
      {
	return "Wednesday";
	// break;
      }

    case enWeekDay::Thu:
      {
	return "Thursday";
	// break;
      }
      
    case enWeekDay::Fri:
      {
	return "Friday";
	// break;
      }

    case enWeekDay::Sat:
      {
	return "Saturday";
	// break;
      }
      
   default:
     return "Invalid Week day.\n";
   }
}

int main()
{

  ShowWeekDayMenu();
  cout << GetWeekDayName(ReadWeekDay()) << endl;
  return 0;
}



