#include<iostream>
using namespace std;

int main() {
	
    string name = "Mohammed Abu-Hadhoud.";
    // short int for unsigned int for better numberism
	short age = 44;
    
	string city = "Amman.";
    string country = "Jordan.";

	float monthelySalary = 5000;
    float yearlySalary = monthelySalary * 12;
    
	char gender = 'M';
    bool marrigeStatus = true;
 	
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