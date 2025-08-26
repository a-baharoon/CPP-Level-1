#include<iostream> 
using namespace std;

int main() {

	// circle area Inscribed in an Isosceles Triangle 
	float a; 
	cin >> a; 
	
	float b;
	cin >> b;
	
	cout << endl;
	float circleArea = (3.14 * (b * b) / 4 ) * (( 2 * a - b) / (2 * a + b) );
	
	cout << circleArea;
	
	
	return 0;
	
	}
	