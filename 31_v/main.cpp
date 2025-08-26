#include <iostream>

using namespace std;

int main() {

  string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the MyString is: " << MyString.length() << endl;

  cout << MyString[2] << endl;

  string S1 = "10", S2 = "20";
  string S3 = S1 + S2;
  
  cout << S3 << endl;

  int Sum = stoi(S1) + stoi(S2);
  cout << Sum << endl;


   // Read String With Spaces:
  string FullName;

  // cin >> FullName; old problem input issue.
  getline(cin, FullName); // Solution towards the problem
  
  cout << FullName << endl;

  return 0;
}
