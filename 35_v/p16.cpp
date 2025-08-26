#include <iostream>
#include <cmath> 
using namespace std;

double rectangleAreaThroughDiagnoal(double a, double d) {

  double area = a * (sqrt(pow(d,2) - pow(a,2)));
  return area;
}

int main() {

  double a = 0;
  cin >> a;

  double d = 0;
  cin >> d;

  cout << rectangleAreaThroughDiagnoal(a, d) << endl;

  return 0;
}
