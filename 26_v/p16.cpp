#include<iostream>
using namespace std;

int main() {
	
	// #16 rectangle area through diagonal and side area
float a,d;

cin >> a >> d;

float area = a * sqrt(pow(d, 2) - pow(a, 2));

cout << area << endl;



	return 0;
}