#include <iostream>
using namespace std;

void printName(string name) {

  cout << name << endl;

}

int main() {

  string name;
  cout << "Enter your name: ";
  getline(cin, name);
  printName(name);

  return 0;
} 
