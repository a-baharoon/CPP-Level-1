#include <iostream>

using namespace std;

int main()
{
  
  int Day = 4;
  switch (Day)
    {  

    case 1:
      cout << "Sunday\n";
      break;

    case 2:
      cout << "Monday\n";
      break;

    case 3:
      cout << "Tuseday\n";
      break;

    case 4:
      cout << "Wednesday\n";
      break;

    case 5:
      cout << "Thursday\n";
      break;

    case 6:
      cout << "Friday\n";
      break;

    case 7:
      cout << "Saturday\n";
      break;
      
    default:
      cout << "Not a week day!\n";
    }
 
  return 0;
}
