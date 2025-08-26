#include<iostream>
using namespace std;

enum GenderStatus {Male, Female};
enum MartialStatus {Single, Married};
enum FavoriteColor {Blue, Yellow, Brown, White, Green};

struct careerInfo {
	
  string jobTitle;
  double monthelySalary;
  double yearlySalary;
	
};

struct personInfo {
	
  string name;
  short age;
  string city;
  string country;
  string nationality;
  
  GenderStatus personInfoGender;
  MartialStatus personInfoMartialStatus;
  FavoriteColor personInfoColor;

  careerInfo list;
	
};


int main() { 

	personInfo emp2137222;
	
	emp2137222.name = "Abdulrahman";
	emp2137222.country = "Saudi Arabia";
	emp2137222.age = 25;
	emp2137222.city = "----------------";

	emp2137222.personInfoGender = GenderStatus::Male;
	emp2137222.personInfoMartialStatus = MartialStatus::Married;

	emp2137222.list.monthelySalary = 10000;
	emp2137222.list.yearlySalary = emp2137222.list.monthelySalary * 12;
	
	cout <<"*****************************" << endl;
	cout <<"Name : " << emp2137222.name << endl;
	cout <<"Age : " << emp2137222.age << endl;
	cout <<"City : " << emp2137222.city << endl;
	cout <<"Country : " << emp2137222.country << endl;
	cout <<"Monthly Salary : " << emp2137222.list.monthelySalary << endl;
	cout <<"Yearly Salary : " << emp2137222.list.yearlySalary << endl;

	cout <<"Gender : " << emp2137222.personInfoGender << endl;
	cout <<"Married : " << 	emp2137222.personInfoMartialStatus << endl;


	cout <<"*****************************" << endl;
	return 0;
}
