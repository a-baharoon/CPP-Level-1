#include <iostream>

using namespace std;
//  46 50
void PrintOneToNum(int N) {
  // #26
  int i = 1;
  while (N > 0) {
    
    cout << i << endl;
    i++;
    N -= 1;
    
  }
}

void PrintNumToOne(int N) {
    // #27
  while (N > 0) {
    cout << N << endl;
    N--;
  }
}

int OddSumOneToNum(int N) {
    // #28
  int Sum = 0;
  while (N >= 0) {
    
    if (N % 2 != 0) {
      Sum += N;
    }
    N--;
  }
  return Sum;
}

int EvenSumOneToNum(int N) {
    // #29
  int Sum = 0;
  while (N >= 0) {
    
    if (N % 2 == 0) {
      Sum += N;
    }
    N--;
  }
  return Sum;
}

int FactorialN (int N) {
  // #30
  
  if (N < 0) {
    return 0;
  }
  
  int fact = 1;
  while (N > 0) {
    fact *= N;
    N--;
  }
  return fact;
}

int PowerM(int N, int M) {
  // #32
  int Power = 1;
  while (M > 0) {
    Power *= N;
    M--;
  }
  return Power;
}

int SumTillM99 () {
  // #37
  int N;
  cin >> N;
  int Sum = N;
  
  while (N != -99) {
    cin >> N;
    
    if (N == -99) {
     return Sum;
    }
    
    Sum += N;
  }
}

void PrintLetters() {
  // #46
  int letter = 65;
  while (letter <= 90) {
    cout << (char) letter << endl;
    letter++;
  }
}



int main() {
  /*
  PrintOneToNum(10);
  cout << '\n';

  PrintNumToOne(10);
  cout << '\n';
  
  cout << OddSumOneToNum(10)  << '\n' << endl;
  cout << EvenSumOneToNum(10) << '\n' << endl;

  cout << FactorialN(6) << '\n' << endl;
  cout << PowerM(2, 4) << '\n' << endl;
  // cout << SumTillM99() << endl;

  PrintLetters();
  */

  int PIN;
  cin >> PIN;

  int x = 0;  
  while (PIN != 1234 && x < 3) {    
    cout << "Wrong PIN, Please Enter the PIN again: ";
    cin >> PIN;
    x++;
   }

  if (PIN == 1234)
    cout << "\nYour Balance is: 7500\n";

  return 0;
  
}
