#include <iostream>
#include <string>

using namespace std;

// Author: Samantha Bracellari

/*
COMPILING INSTRUCTIONS (ON LINUX)

In the terminal, in the folder that this file is located, run the following command:

    gcc guest-book.cpp -lstdc++ -o guestbook

This will create an executable named 'guestbook'. To run the executable, run this command:

    ./guestbook

I have included the executable in my submission, though I'm not sure if it will work that way.
If it doesn't, that first command is the failsafe.
*/

/*
Question 2: Guest Book
Purpose: To write a new entry into a guest book
The user inputs information about themselves, and it is displayed accordingly
*/
int main() {
  string firstName;
  string middleInitial;
  string lastName;
  string address;
  string city;
  string state;
  string postalCode;
  string country;

  cout << "Enter first name: ";
  getline(cin, firstName);

  cout << "Enter middle initial: ";
  getline(cin, middleInitial);

  cout << "Enter last name: ";
  getline(cin, lastName);

  cout << "Enter address: ";
  getline(cin, address);

  cout << "Enter city: ";
  getline(cin, city);

  cout << "Enter state: ";
  getline(cin, state);

  cout << "Enter postal code: ";
  getline(cin, postalCode);

  cout << "Enter country: ";
  getline(cin, country);

  cout << "Guest Book" << endl << endl;

  cout << "First name:\t" << firstName << endl;
  cout << "Middle initial: " << middleInitial <<endl;
  cout << "Last name:\t" << lastName << endl;
  cout << "Address:\t" << address << endl;
  cout << "City:\t\t" << city << endl;
  cout << "State:\t\t" << state << endl;
  cout << "Postal code:\t" << postalCode << endl;
  cout << "Country:\t" << country << endl << endl;

  cout << "ENTRY" << endl;
  cout << firstName << " " << middleInitial << " " << lastName << endl;
  cout << address << " " << endl;
  cout << city << ", " << state << " " << postalCode << endl;
  cout << country << endl;

  return 0;
}