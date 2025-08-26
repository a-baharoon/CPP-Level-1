#include <iostream>
using namespace std;

enum Color {Red, Green, Yellow, Blue};
enum Direction {North, South, East, West};

enum Week {Sat, Mon, Sun, Tue, Wed, Thu, Fri};
enum Gender {Male, Female};
enum Status {Single, Married};


int main() {

  Color MyColor;
  Direction MyDirection;
  Week Today;
  Status MyStatus;

  MyColor = Color::Green;
  MyDirection = Direction::North;
  Today = Week::Sat;
  MyStatus = Status::Married;
  
  cout << "Today: " << Today << endl;

  return 0;
}
