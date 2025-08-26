#include <iostream>
#include <cmath> 
using namespace std;

double circleArea(double radius) {

  double cricleArea = 3.14 * pow(radius, 2);
  return cricleArea;
}

int main() {

  double radius = 0;
  cin >> radius;
  cout << circleArea(radius) << endl;

  return 0;
}
