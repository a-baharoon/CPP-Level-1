#include<iostream>
#include<cmath> 
using namespace std;

int main() {

	 short days, hours, minutes, seconds;
	 cin >> days >> hours >> minutes >> seconds; 
	 
	 float durationSeconds = days * 86400 + hours * 3600 + minutes * 60 + seconds;
	 
	 cout << endl;
	 cout << round(durationSeconds) << endl;
	
	return 0;
	
	}
	