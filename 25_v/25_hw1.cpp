#include <iostream>
using namespace std;

int main() {
  
  // 1
  cout << "12 >= 12 is " << (12 >= 12) << endl;

  // 1
  cout << "12 > 7 is " << (12 >= 7) << endl; 

  // 0
  cout << "8 < 6 is " << (8 < 6) << endl;

  // 1
  cout << "8 = 8 is " << (8 == 8) << endl;

  // 1
  cout << "12 <= 12 is " << (12 <= 12) << endl;

  // 0 
  cout << "7 = 5 is " << (7 == 5) << endl;
  cout << "-------------2------------------" << endl;

  // 0
  cout << "NOT(12 >= 12) is " << !(12 >= 12) << endl;

  // 1
  cout << "NOT(12 < 7) is " << !(12 < 7) << endl; 

  // 0
  cout << "NOT(8 < 6) is " << !(8 < 6) << endl;

  // 1
  cout << "NOT(8 = 8) is " << !(8 == 8) << endl;

  // 0
  cout << "NOT(12 <= 12) is " << !(12 <= 12) << endl;

  // 1 
  cout << "NOT(7 = 5) is " << !(7 == 5) << endl;
  cout << "-------------3------------------" << endl;

  // 1
  cout << "1 AND 1 is " << (1 && 1) << endl;
  // 0
  cout << "True AND 0 is " << (true && 0) << endl;

  // 1
  cout << "0 OR 1 is " << (0 || 1) << endl;
  // 0
  cout << "0 OR 0 is " << (0 || 0) << endl;

  // 1
  cout << "NOT 0 is " << !(0) << endl;
  // 0
  cout << "NOT(1 OR 0) is " << !(1 || 0) << endl;

  cout << "-------------4------------------" << endl;

  // 1 
  cout << "(7 = 7) AND (7 > 5) is " << ((7 == 7) && (7 > 5)) << endl;
  // 0 
  cout << "(7 = 7) AND (7 < 5) is " << ((7 == 7) && (7 < 5)) << endl;

  // 1
  cout << "(7 = 7) OR (7 < 5) is " << ((7 == 7) || ( 7 < 5)) << endl;
  // 1
  cout << "(7 < 7) OR (7 > 5) is " << ((7 < 7) || ( 7 > 5)) << endl;

  // 0 
  cout << "NOT(7 = 7) AND (7 > 5) is " << (!(7 == 7) && (7 > 5)) << endl;
  // 1
  cout << "(7 = 7) AND NOT(7 < 5) is " << ((7 == 7) && !(7 < 5)) << endl;



  return 0;
}
