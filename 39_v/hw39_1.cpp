#include <iostream>


using namespace std;


int main() {

  double grades [3];

  // I removed \n to keep the input on the same line as the prompt. 
  cout << "Enter the first student grade: ";
  cin >> grades[0];

  cout << "Enter the second student grade: ";
  cin >> grades[1];

  cout << "Enter the third  student grade: ";
  cin >> grades[2];

  cout << "**********************************************\n";
  
  double averageGrades = (grades[0] + grades[1] + grades[2]) / 3;
  cout << "The average of grades is " << averageGrades << endl;

  return 0;
}
