#include <iostream>
using namespace std;

int main() {
  /*for (int i = 0; i < 5; i++) {
    if (i==3) {
      continue 
    }
    cout << i << endl;
  }
  */
  
  int Sum = 0;
  int Num = 0;
  
  for (int i = 0; i < 5; i++) {

      cin >> Num;
      if (Num > 50) {
	continue;
      }
      
    Sum += Num;
  }
  
  cout << '\n';
  cout << Sum << endl;
  
  return 0;
}
