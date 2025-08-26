#include <iostream>
using namespace std;

int main() {

  int number;
  string name;
  string country;

  cout << "Please enter Employee number: ";
  cin >> number;

  cout << "Please enter Employee name: ";
  cin.ignore(1, '\n');
  getline(cin, name);

  cout << "Please enter Employee country: ";
  cin >> country;

  cout << "Number: " << number << ", Name: " << name << ", Country: " << country << endl;

  return 0;

}
