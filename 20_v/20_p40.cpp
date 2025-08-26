#include<iostream> 
using namespace std;

int main() {
	
	float billValue; 
	cin >> billValue;
	
	float serviceFee = 0.1;
	float salesTax = 0.16;
	
	double totalBill = billValue + (billValue * serviceFee + billValue * salesTax);
	
	cout << endl;
	cout << totalBill << endl;
	
	return 0;
	
	}
	