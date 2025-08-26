#include <iostream>
#include <string> 
using namespace std;

struct strInfo {

  string firstName;
  string lastName;
  int age;
  string phone;

};

void readInfo(strInfo &info) {

  cout << "Please enter your first name: ";
  cin >> info.firstName;

  cout << "Please enter your last name: ";
  cin >> info.lastName;

  cout << "Please enter your age: ";
  cin >> info.age;

  cout << "Please enter your phone number: ";
  cin >> info.phone;
  cout << '\n';
}

void printInfo(strInfo &info) {
  cout << "*****************************************" << endl;
  cout << "First Name: " << info.firstName << '\n';
  cout << "Last  Name: " << info.lastName << '\n';
  cout << "Age: " << info.age << '\n';
  cout << "Phone number: " << info.phone << '\n';
  cout << "*****************************************\n" << endl;  
}


int main() {

  strInfo person1Info;
  readInfo(person1Info);
  printInfo(person1Info);

  strInfo person2Info;
  readInfo(person2Info);
  printInfo(person2Info);


  
  return 0;
}
  
