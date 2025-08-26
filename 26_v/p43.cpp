#include<iostream> 
#include<cmath>

using namespace std;

int main() {

	int seconds;
	cin >> seconds;
	
	cout << round(seconds / 86400) << ":" << round(seconds % 86400 / 3600) << ":" <<  round(seconds % 86400 % 3600/ 60) << ":" <<  round(seconds % 86400 % 3600 % 60);
	cout << endl;
	
	// cout << seconds / 86400;

	//cout << seconds % 86400 / 3600 << "hours\n";

	//cout << seconds % 86400 % 3600 / 60 << "minutes\n";

	//cout << seconds % 86400 % 3600 % 60 << "seconds\n";
	
	return 0;
	
	}
	