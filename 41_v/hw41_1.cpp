#include <iostream>

using namespace std;

struct strInfo
{
  string FirstName;
  string LastName;
  int Age;
  string Phone;
};

void ReadPersonInfo(strInfo& Person)
{
  cout << "Enter Person1 first name: ";
  cin >> Person.FirstName;

  cout << "Enter Person1 last name: ";
  cin >> Person.LastName;
  
  cout << "Enter Person1 age: ";
  cin >> Person.Age;

  cout << "Enter Person1 Phone Number: ";
  cin >> Person.Phone;
}

void PrintPersonInfo(strInfo Person)
{
  cout << "************************************\n";
  cout << "FirstName: " << Person.FirstName << endl;
  cout << "LastName: " << Person.LastName << endl;
  cout << "Age: " << Person.Age << " Years." << endl;
  cout << "Phone: " << Person.Phone << "." << endl;
  cout << "************************************\n";
}

void ReadPersonsInfo(strInfo Persons[2])
{
  ReadPersonInfo(Persons[0]);
  ReadPersonInfo(Persons[1]);
}

void PrintPersonsInfo(strInfo Persons[2])
{
  PrintPersonInfo(Persons[0]);
  PrintPersonInfo(Persons[1]);
}

int main ()
{
  strInfo Persons[2];
  
  strInfo Person;
  //   ReadPersonInfo(Person);
  // PrintPersonInfo(Person);
  ReadPersonsInfo(Persons);
  PrintPersonsInfo(Persons);
  
  

  
  return 0;
}
