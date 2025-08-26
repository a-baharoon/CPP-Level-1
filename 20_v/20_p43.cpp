#include<iostream> 
using namespace std;

int main() {

	int seconds;
	cin >> seconds;
	
	cout << seconds / 86400 << ":" <<seconds % 86400 / 3600 << ":" <<  seconds % 86400 % 3600 / 60 << ":" <<  seconds % 86400 % 3600 % 60;
	cout << endl;
	
	// cout << seconds / 86400;

	//cout << seconds % 86400 / 3600 << "hours\n";

	//cout << seconds % 86400 % 3600 / 60 << "minutes\n";

	//cout << seconds % 86400 % 3600 % 60 << "seconds\n";
	
	return 0;
	
	}
	