#include <iostream>

using namespace std;
void myFunction () {
  
  // A function that does not return anything is called a procedure. 
  cout << "This is my first function, it got excuted :-)" << endl;


}

string  myFunction2() {

  return "This is my second function :-)\n";

}

int myFunction3() {

  int x = 10;
  int y = 20;

  return x * y;


}
  
int main() {

  0


  myFunction();
  cout << myFunction2() << endl;
  
  cout << myFunction3() << endl;
  return 0;
}
