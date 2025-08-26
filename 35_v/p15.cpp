#include <iostream>
using namespace std;

double rectangleArea(double width, double height) {

  double area = width * height;
  return area;
}
  

int main() {
  
  int width = -1;
  cin >> width;

  int height = -1;
  cin >> height;
  
  cout << rectangleArea(width, height) << endl;
  return 0;
}
