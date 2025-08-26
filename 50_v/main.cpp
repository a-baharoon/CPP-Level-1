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

    /*
    cout << "\n For Loop \n";
    // for loop from 1 to 5
    for (int x = 1; x <= 5; x++)
    {
        cout << x << endl;
    }

    cout << "\n While Loop \n";
    // while loop from 1 to 5
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
    
    
    int Number;
    cout << "Please enter a positive number?\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Number. Please enter a positve Number ?";
        cin >> Number;
    }

    cout << "\nThe number you entered is " << Number << endl;
  */

  //cout << "\n The Number is " << ReadIntNumberInRange(18, 45) << endl;
  int number = ReadIntNumberInRange(18, 45);
  cout << "\nThe Number is " << number << endl;

  return 0;
}
