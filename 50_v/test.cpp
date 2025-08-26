#include <iostream>

using namespace std;

int ReadIntNumberInRange(int From, int To)
{
    int Number;
    cout << "Please enter a number between " << From << " and " << To << ": ";
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "\nWrong Number, Please enter a number between " << From << " and " << To <<  ": "; 
        cin >> Number;
    }
    return Number;
}


int main() {
  

  cout << "\nThe Number is " << ReadIntNumberInRange(18, 45) << endl;

  return 0;
}
