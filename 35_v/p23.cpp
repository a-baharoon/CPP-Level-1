#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double circleAreaAroundArbitraryTraingle(double a, double b , double c) {

  double p = (a + b + c) / 2;

  double circleArea = 3.14 * pow( (a * b * c) / (4 * sqrt(p * (p-a) * (p-b) * (p-c)) ), 2);
  return circleArea;
}
  
int main() {

  double a = 0, b = 0, c = 0;
  cin >> a >> b >> c;

  cout << circleAreaAroundArbitraryTraingle(a, b, c) << endl;

  return 0;
}
