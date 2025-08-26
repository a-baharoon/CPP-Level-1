#include <iostream>

using namespace std;

enum enScreenColor {Red = 1, Blue = 2, Green = 3, Yellow = 4};

void DisplayScreenColorMenu()
{
  cout << "**************************\n";
  cout << "Please choose the number of your color\n";
  cout << "(1) Red\n";
  cout << "(2) Blue\n";
  cout << "(3) Green\n";
  cout << "(4) Yellow\n";
  cout << "**************************\n\n";
  cout <<"Your choice: ";
}

enScreenColor ReadScreenColor()
{
  int C;
  cin >> C;
  return (enScreenColor) C;
}

void GetScreenColor(enScreenColor Color)
{
    if (Color == enScreenColor::Red)
    {
        cout << "\033[41;37m"; // Red background, white text
    }
    else if (Color == enScreenColor::Blue)
    {
        cout << "\033[44;37m"; // Blue background, white text
    }
    else if (Color == enScreenColor::Green)
    {
        cout << "\033[42;37m"; // Green background, white text
    }
    else if (Color == enScreenColor::Yellow)
    {
        cout << "\033[43;30m"; // Yellow background, black text
    }
    else
    {
        cout << "\033[41;37m"; // Default to red background, white text
    }

    // Clear the screen to apply the background color
    cout << "\033[2J";  // Clear screen
    cout << "\033[H";   // Move cursor to home position
    
    // Keep the terminal open to see the result
    cout << "Your selected color is applied. Press Enter to exit...";
    cin.ignore(); // Clear the input buffer
    cin.get();    // Wait for Enter key
    
    // Reset colors before exiting
    cout << "\033[0m";

  /*  for windows machines!
  if (Color == enScreenColor::Red)
    {
      system("color 4F");
    }
  
  else if (Color == enScreenColor::Blue)
    {
      system("color 1F");
    }
  
  else if (Color == enScreenColor::Green)
    {
      system("color 2F");
    }
  
  else if (Color == enScreenColor::Yellow)
    {
      system("color 6F");
    }
  
  else
    {
      system("color 4F");
    }
  */
}



int main()
{
  DisplayScreenColorMenu();
  GetScreenColor(ReadScreenColor());
  return 0; 
}
