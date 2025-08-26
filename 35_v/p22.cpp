#include <iostream>
#include <cmath>
using namespace std;


double circleAreaInscribedInIsosceles(double a, double b) {

  double circleArea = (3.14 * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
  return circleArea;
}

int main() {

  double a = 0;
  cin >> a;

  double b = 0;
  cin >> b;

  cout << circleAreaInscribedInIsosceles(a, b) << endl;


  return 0;

}
