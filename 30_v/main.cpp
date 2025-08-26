#include <iostream>
#include <string>
using namespace std;

int main() {

	int Num1; 
	double Num2;
	Num2 = 18.99;

	Num1 = Num2;
	Num1 = (int)Num2;
	Num1 = int(Num2);

	cout << Num1 << endl;

	cout << "----------------------------------------\n";
	string str = "123.456";
	
	int num_int = stoi(str);
	float num_float = stof(str);
	double num_double = stod(str);

	cout << "num_int = " << num_int << endl;
	cout << "num_float = " << num_float << endl;
	cout << "num_double = " << num_double << endl;
	cout << "----------------------------------------\n";
	
	int num = 123;
	double num1 = 18.99;

	string st1, st2;

	st1 = to_string(num);
	st2 = to_string(num1);
	
	cout << st1 << endl;
	cout << st2 << endl;
	
	
	
	
	
	
	return 0;
}
