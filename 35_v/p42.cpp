#include <iostream>

using namespace std;

double taskDurationInSeconds(int days, int hours, int minutes, int seconds) {
  double durationInSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds; 
  return durationInSeconds;
} 

int main() {

  int days = 0, hours = 0, minutes = 0, seconds = 0;
  cin >> days >> hours >> minutes >> seconds;
  cout << taskDurationInSeconds(days, hours, minutes, seconds) << endl;

  return 0; 
}
