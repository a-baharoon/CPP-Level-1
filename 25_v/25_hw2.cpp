#include <iostream>
using namespace std;

int main() {
  
  // 1
  cout << "(5 > 6 AND 7=7) OR (1 OR 0) is " << ((5 > 6 && 7 ==7) || (1 || 0)) << endl;
  cout << '\n';

  // 1
  cout << "NOT(5 > 6 AND 7=7) OR (1 OR 0) is " << (!(5 > 6 && 7 ==7) || (1 || 0)) << endl;
  cout << '\n';

  // 1
  cout << "NOT(5 > 6 AND 7=7) OR NOT(1 OR 0) is " << (!(5 > 6 && 7 ==7) || !(1 || 0)) << endl;
  cout << '\n';
  
  // 0
  cout << "NOT(5 > 6 OR 7=7) AND NOT(1 OR 0) is " << (!(5 > 6 && 7 ==7) && !(1 || 0)) << endl;
  cout << '\n';
  
  // 0
  cout << "((5 > 6 AND 7 <= 8) OR ( 8 > 1 AND 4 <= 3)) AND TRUE is "
       << ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3) && true) << endl; 
  cout << '\n';

  // 1
  cout << "( (5 > 6 AND NOT (7 <= 8)) AND (8 > 1 OR 4 <= 3)) OR TRUE is " 
       <<  ( ((5 > 6 && !(7<=8)) && (8 > 1 || 4 <= 3)) || true) << endl;
  
  return 0;
}
