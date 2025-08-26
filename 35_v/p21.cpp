#include <iostream>
#include <cmath>
using namespace std;


double circleAreaAlongCircumference(double length) {

  double circleArea = pow(length, 2) / (4 * 3.14);
  return circleArea;
}
int main() {

  double length = 0;
  cin >> length;

  cout << circleAreaAlongCircumference(length) << endl;


  return 0;

}
