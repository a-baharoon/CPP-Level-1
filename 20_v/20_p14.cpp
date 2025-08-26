#include<iostream> 
using namespace std;

int main() {

	int number1, number2;
	cin >> number1 >> number2;
	
	int swap = number1;
	number1 = number2;
	number2 = swap;
	
	cout << "\n" << number1 << endl;
	cout << number2 << endl;
	return 0;
	
	}
	