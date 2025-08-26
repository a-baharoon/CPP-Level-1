#include <iostream> 
using namespace std;

void mySumProcedure()
{
	int Number1 = -1; 
	cout << "Please enter Number1? ";
	cin >> Number1; 
	
	int Number2 = -1;
	cout << "Please enter Number2 ";
	cin >> Number2;

	cout <<"********************************************************" << endl;
	cout << Number1 + Number2 << endl;


}

int mySumFunction()
{
	int Number1 = -1; 
	cout << "Please enter Number1? ";
	cin >> Number1; 
	
	int Number2 = -1;
	cout << "Please enter Number2 ";
	cin >> Number2;

	cout <<"********************************************************" << endl;
	return Number1 + Number2; 
}


int main() {

  cout << "--------------------Procedure-----------------------\n" << endl;
  mySumProcedure();
  cout << "--------------------Function-----------------------\n" << endl;
  cout << mySumFunction() << endl;

 return 0;
}
