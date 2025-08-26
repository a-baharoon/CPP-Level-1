#include <iostream>

using namespace std;

void PrintChars()
{
  for (int i = 65; i <= 90; i++)
    {
      for (int j = 65; j <= 90; j++)
	cout << (char) i <<  (char) j << endl;
    }
}

void  Traingle() {

  for (int j = 0; j < 10; j++) {
    for (int i = 0; i <= j; i++) {
      cout << "*";
    }
    
    cout << endl;
  }
}

void FlippedTraingle() {

  for (int j = 10; j > 0; j--) {

    for(int i = 0; i < j; i++) {
	cout << "*";
    }
    
    cout << endl;
  }      
}

void NumericalTraingle() {

  for (int j = 0; j < 10; j++) {
    for (int i = 0; i <= j; i++) {
      cout << i+1 << ' ';
    } 
    cout << endl;
  }
}

void NumericalFlippedTraingle() {
  cout <<"THIS IS FLIPPED NIGGER TRAING\n";
  for (int j = 10; j > 0; j--) {

    for(int i = 0; i < j; i++) {
      cout << i+1 << ' ';
    }
    cout << endl;
  }      
}

void FlippedNumTraingle() {

  for (int i = 0; i < 10; i++) {
    
    int x = i;
    for (int j = 10; j > i; j--) {
      x += 1;
      cout << x << ' ';
    }
    cout << endl;
  }
  
}

void  CharTraingle() {

  for (int j = 65; j < 70; j++) {
    for (int i = 65; i <= j; i++) {
      cout << (char) i << ' ' ;
    }
    cout << endl;
  }
}




int main()
{
  
  PrintChars();
  cout << endl;

  Traingle();
  cout << endl;

  FlippedTraingle();
  cout << endl;

  NumericalTraingle();
  cout << endl;
 
  NumericalFlippedTraingle();
  cout << endl;

  CharTraingle();
  cout << endl;

  FlippedNumTraingle();
  cout << endl;
  return 0;
  
}
