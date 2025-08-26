#include<iostream> 
#include<cmath>
#include<math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main() {

	// #19 Circle Area through diameter
	float d; 
	cin >> d;
	double pi = M_PI; 
	cout << ceil(pi * pow(d, 2) / 4) << endl;
	
 
	return 0;

}
