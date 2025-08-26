#include <iostream>

using namespace std;

struct strInfo
{
  string FirstName;
  string LastName;
  int Age;
  string Phone;
};

void ReadPersonInfo(strInfo &Person)
{
  cout << "Enter First Name: ";
  cin >> Person.FirstName;

  cout << "Enter Last Name: ";
  cin >> Person.LastName;
  
  cout << "Enter Age: ";
  cin >> Person.Age;

  cout << "Enter Phone Number: ";
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

void ReadPersonsInfo(strInfo Persons[100], int &PersonsNum)
{

  cout << "Enter how many persons you have: ";
  cin >> PersonsNum;
  cout << endl;
  
  for (int i = 0; i < PersonsNum; i++)
    {
      cout << "Please Enter Person " << i + 1 << " Info:\n";
      ReadPersonInfo(Persons[i]);
      cout << endl;
    }
}

void PrintPersonsInfo(strInfo Persons[100], int PersonsNum)
{
  for (int i = 0; i < PersonsNum; i++)
    {
      cout << "Person " << i + 1 << " Information\n";
      PrintPersonInfo(Persons[i]);
      cout << endl;
    }
}

int main ()
{

  int PersonsNum = 0;
  
  strInfo Persons[100];
  strInfo Person;
  
  ReadPersonsInfo(Persons, PersonsNum);
  PrintPersonsInfo(Persons, PersonsNum);
  
  return 0;
  
}
