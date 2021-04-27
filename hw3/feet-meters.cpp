#include <iostream>
#include <cmath>

using namespace std;

// Author: Samantha Bracellari

/*
COMPILING INSTRUCTIONS (ON LINUX)

In the terminal, in the folder that this file is located, run the following command:

    gcc feet-meters.cpp -lstdc++ -lm -o fm

This will create an executable named 'fm'. To run the executable, run this command:

    ./fm

I have included the executable in my submission, though I'm not sure if it will work that way.
If it doesn't, that first command is the failsafe.
*/

// to convert feet to meters
float feetToMeters(float feet) {
  return floor(100*(0.3048*feet))/100;
}

// to convert meters to feet
float metersToFeet(float meters) {
  return floor(100*(meters/0.3048))/100;
}

// to display the conversion menu
void displayMenu() {
  cout << "Conversions Menu:" << endl;
  cout << "a. Feet to Meters" << endl;
  cout << "b. Meters to Feet" << endl;
}

int main() {
  char cont;
  char choice;
  float feet;
  float meters;

  cout << "Feet to Meters Conversion" << endl << endl;

  do {
    displayMenu();
    cout << "Select a conversion (a/b): ";
    cin >> choice;

    if (choice == 'a') {
      cout << endl;
      cout << "Enter feet: ";
      cin >> feet;
      cout << feetToMeters(feet) << " Meters" << endl;
      cout << "Continue? (y/n): ";
      cin >> cont;
      cout << endl;
    } else if (choice == 'b') {
      cout << endl;
      cout << "Enter Meters: ";
      cin >> meters;
      cout << metersToFeet(meters) << " Feet" << endl;
      cout << "Continue? (y/n): ";
      cin >> cont;
      cout << endl;
    } else {
      cout << "You must enter a valid menu option." << endl;
      cout << "Continue? (y/n): ";
      cin >> cont;
      cout << endl;
    }
  } while (cont == 'y');

  cout << "Thanks, Bye!";
  return 0;
}