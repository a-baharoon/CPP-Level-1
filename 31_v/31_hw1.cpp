#include <iostream>
#include <string>
using namespace std;

int main()
{
	string String1;
	cout << "Please enter String1? ";
	getline(cin, String1);

	string String2;
	cout << "Please enter String2? ";
	getline(cin, String2);

	string String3;
	cout << "Please enter String3? ";
	getline(cin, String3);

	cout << "*****************************" << endl;
	cout << "The Length of String1 is " << String1.length() << endl;

	
	cout << "Characters at 0, 2, 4, 7 " << String1[0] << " " << String1[2] << " " << String1[4] << " " << String1[7] << endl;
	cout << "Concatenating String2 and String3 = " << String2 + String3 << endl;
	cout << String2 << " * " << String3 << " = " << stoi(String2) * stoi(String3) << endl;
	
	return 0;


}

