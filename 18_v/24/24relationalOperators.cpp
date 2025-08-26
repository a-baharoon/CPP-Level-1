#include <iostream>
using namespace std;

int main () {

	int A; 
	cout << "Please enter the first number A? ";
	cin >> A;
	
	int B;
	cout << "Please enter the Second number B? ";
	cin >> B;
	
	cout <<	"\n\n";
	
	cout << A << " = " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B) << endl;
	



	return 0;



}