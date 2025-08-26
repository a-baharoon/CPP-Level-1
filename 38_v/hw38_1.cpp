#include <iostream>

using namespace std;

struct strEmpCard {
  string name;
  int age;
  string city;
  string country;
  double monthlySalary;
  char gender;
  bool marriage;

};


void readEmpCardInfo(strEmpCard &emp1) {
          cout << "Enter your name: ";
	
	  getline(cin,emp1.name);

	  cout << "Enter your age: ";
	  cin >> emp1.age;

		  cout << "Enter your city: ";
		  cin >> emp1.city;

		  cout << "Enter your country: ";
		  cin >> emp1.country;

		  cout << "Enter your monthly salary: ";
		  cin >> emp1.monthlySalary;

		  cout << "Enter your gender: ";
		  cin >> emp1.gender;

		  cout << "Enter your martial status. if you're married type 1, else type 0: ";
		  cin >> emp1.marriage;
		  cout << endl;

}



void printEmpCardInfo(strEmpCard &emp1) {
  cout << "*****************************************" << endl;
  cout << "Name: " << emp1.name << '\n';
  cout << "Age: " << emp1.age << '\n';
  cout << "City: " << emp1.city << '\n';
  cout << "Country: " << emp1.country << '\n';
  cout << "Monthly salary: " << emp1.monthlySalary << '\n';
  cout << "Yearly salary: " <<  emp1.monthlySalary * 12 << '\n';
  cout << "Gender: " << emp1.gender << '\n';
  cout << "Married: " << emp1.marriage << '\n';
  cout << "*****************************************\n" << endl;  
}

int main()
{

  
  strEmpCard emp1;
  readEmpCardInfo(emp1);
  printEmpCardInfo(emp1);
  
  return 0;
}
