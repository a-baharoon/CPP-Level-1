#include<iostream> 
using namespace std;

int main() {

	float arcLength; 
	cin >> arcLength; 
	
	float circleAreaAlongtheCircumference = arcLength * arcLength / ( 4 * 3.14 );
	
	
	cout << endl;
	cout << circleAreaAlongtheCircumference << endl;
	
	
	return 0;
	
	}
	