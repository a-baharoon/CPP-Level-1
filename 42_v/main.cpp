#include <iostream>

using namespace std;

int main()
{
  int x;
  cout << "Please enter your number?: ";
  cin >> x;

  // if x == 5 else will excute since 5 > 5 is false.
  if (x > 5)
    {
      cout << "Yes, X is greater than 5" << endl;
    }
    
  else
    {
      cout << "No, X is less than 5" << endl;
    }

   
  /*
  if (x >= 5 || x <= 8)
    {
      cout << "The code of if body has excuted." << endl;
    }
 
  if (x >= 5 && x <= 8)
    {
      cout << "The code of if body has excuted." << endl;
    }

 cout << "The code after if body always executed." << endl;
  */
  


  return 0;
}
