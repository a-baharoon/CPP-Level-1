#include<iostream>
using namespace std;

int main() {
	
	string name;
	cout << "Enter your name: " << endl;
	cin >> name; 
	
	short age;
	cout << "Enter your age: ";
    cin >> age;
	
	string city;
	cout << "Enter your city: ";
	cin >> city;
	
    string country;
	cout << "Enter your country: ";
	cin >> country;
	
	
	float monthelySalary;
    cout << "Enter your monthly salary: ";
	cin >> monthelySalary;
	
	float yearlySalary = monthelySalary * 12;
    
	char gender;
    cout << "Enter your gender: ";
	cin >> gender;
	
	
	bool marrigeStatus;
 	cout << "Are you married or not? (respond with 0 if not 1 if true) ";
    cin >> marrigeStatus;
	cout << endl;
	
	cout << "***********************************" << endl << endl;
   
    cout << "Name: " << name << endl;
	cout << "Age : " << age << " Years." << endl;
	cout << "City : " << city << endl;
	cout << "Country : " << country << endl;
	cout << "Monthly Salary : " << monthelySalary << endl;
	cout << "Yearly Salary : " << yearlySalary << endl;
    cout << "Gender : " << gender << endl;
	cout << "Married : " << marrigeStatus << endl;
	cout << "***********************************";


	return 0;
}