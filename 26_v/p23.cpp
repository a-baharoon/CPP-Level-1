#include<iostream> 
#include<cmath>
#include<math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main() {

	// #23 area of circle insribed as an arbitary traingle
	double a, b, c; 
	cin >> a >> b >> c;
	
	
	double p = (a + b + c) / 2; 
	double pi = M_PI; 
	
	
	double area = round(pi * pow( (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c) )), 2) );
	
	cout << area << endl;
	
	
	
	
 
	return 0;

}
