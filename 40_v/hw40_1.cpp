#include <iostream>
#include <string>
using namespace std;

void ReadGradesData(int Grades[3])
{
  cout << "Please enter Grade1: ";
  cin >> Grades[0];
  
  cout << "Please enter Grade2: ";
  cin >> Grades[1];
  
  cout << "Please enter Grade3: ";
  cin >> Grades[2];
}

double GradesAverage(int Grades[3])
{
  // important to use 3.0 to ensure a double division
  return (Grades[0] + Grades[1] + Grades[2]) / 3.0;
}
  
void PrintGradesAverage(double GradesAverage)
{
  cout << "****************************" << endl;
  cout << "The average of grades is " << GradesAverage << endl;
}

int main ()
{
  int Grades[3];   
  ReadGradesData(Grades);
  PrintGradesAverage(GradesAverage(Grades));
  
  return 0;
}
