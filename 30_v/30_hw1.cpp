#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string st1 = "43.22";
    // convert st1 to float double integer 
    cout << stoi(st1) << endl;
    cout << stof(st1) << endl;
    cout << stod(st1) << endl;

    int N1 = 20;
    // convert N1 to string
    cout << to_string(N1) << endl;
    
    double N2 = 35.5;
    // convert N2 to string
    cout << to_string(N2) << endl;
	
    float N3 = 55.23f; 
    // convert N3 to string, integer (use all 3 ways)
    cout <<  to_string(N3) << endl;
    cout << int(N3) << endl;
    cout << (int)N3 << endl;
    
	
	return 0;
}
