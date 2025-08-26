#include <iostream>
#include <cmath>
using namespace std;
int powerCalculator(int number, int m) {

  int power = pow(number, m);

  return power; 
}
int main() {

  int number = 0;
  cin >> number;

  int m = 0;
  cin >> m;

  cout << powerCalculator(number, m) << endl;

  return 0;
}
