#include<iostream> 
using namespace std;

int main() {
	
	//  1c      5c       10c    25c      100c
	int pennies, nickels, dimes, quarters, dollars;
	cin >> pennies >> nickels >> dimes >> quarters >> dollars;
	
	double totalPennies = pennies + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
	double totalDollars = totalPennies / 100;
	
	cout << endl;
	cout << totalPennies << " Pennies" << endl;
	cout << totalDollars << " Dollars" << endl;
	return 0;
	
	}
	