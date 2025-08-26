#include <iostream>
#include <cmath>
using namespace std;

double circleAreaThroughDiameter(double diameter) {
  double circleArea = (3.14 * pow(diameter,2)) / 4;
  return circleArea;
}
int main() {

  double circleDiameter = -1;
  cin >> circleDiameter;

  cout << circleAreaThroughDiameter(circleDiameter) << endl;


  return 0;
}
