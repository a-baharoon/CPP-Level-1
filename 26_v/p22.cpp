#include<iostream> 
#include<cmath>
#include<math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main() {

	// #22 Circle Area through traingle
	float a,b;
	double pi = M_PI; 
	
	cin >> a >> b;
	
	cout << floor(pi * pow(b,2) / 4 * ( (2 * a - b) / (2 * a + b) ))<< endl; 
	
 
	return 0;

}
