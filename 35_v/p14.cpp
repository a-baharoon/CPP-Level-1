#include <iostream>
using namespace std;

void swapNumbers(int num1, int num2) {

  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
  cout << num1 << "\n" << num2 << endl;
  
}
  

int main() {
  
  int num1 = -1;
  cin >> num1;

  int num2 = -1;
  cin >> num2;
  cout << endl;
  swapNumbers(num1, num2);

  return 0;
}
