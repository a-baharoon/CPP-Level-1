#include<iostream> 
using namespace std;

int main() {
	
	float totalBill;
	int cashPaid;
	cin >> totalBill >> cashPaid;

	cout << endl;
	float reminder =  cashPaid - totalBill;
	
	cout << endl;
	cout << reminder << endl;
	
	
	return 0;
	
	}
	