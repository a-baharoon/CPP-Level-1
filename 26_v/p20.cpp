#include<iostream> 
#include<cmath>
#include<math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main() {

	// #20 Circle Area through square
	float a; 
	cin >> a;
	double pi = M_PI; 
	cout << ceil(pi * pow(a/2,2)) << endl;
	
 
	return 0;

}
