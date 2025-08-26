#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void powerCalculator(int number) {

  cout << pow(number, 2) << endl;
  cout << pow(number, 3) << endl;
  cout << pow(number, 4) << endl;
}

int main() {

  int number = 0;
    cin >> number;

    powerCalculator(number);

  return 0;
}
