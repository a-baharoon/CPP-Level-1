#include <iostream> 
#include <cmath>
using namespace std;
double circleAreaInscribedInSquare(double A) {

  double circleArea = 3.14 * pow(A/2, 2);
  return circleArea;

}



int main() {

  double a = 0;
  cin >> a;
  cout << circleAreaInscribedInSquare(a) << endl;
  
  return 0;
}
