#include <iostream>

using namespace std;

int ReadIntNumberInRange(int From, int To)
{
    int Number;
    
    do {
      cout << "Please enter a number between " << From << " and " << To << ": ";
      cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}


int main() {

  int number = ReadIntNumberInRange(18, 45);
  cout << "\nThe Number is " << number << endl;

  return 0;
}
