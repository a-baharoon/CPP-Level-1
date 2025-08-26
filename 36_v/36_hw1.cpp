#include <iostream>

using namespace std;

int x = 700;
int y = 700;

void myFunction()
{	
	int x = 500;
	int y = 500;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "::x = " << ::x << endl;
	cout << "::y = " << ::y << endl;
}

int main() {
	
	int x = 10;
	int y = 10;
	cout << "local value of x is: " << x << endl;
	cout << " -------------------------------------\n";
	myFunction();
	
	cout << " -------------------------------------\n";
	cout << x << " and " << y << endl;
	
	return 0;
}