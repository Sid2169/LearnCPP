#include <iostream>
using namespace std;
#include <string>

int main() 
{
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName << "\n";
    
  cout << "Hello World! \n"; //Print string on to the terminal
  printf("I am learning C++"); //Also prints string on to the termnial

  int myNum = 15; //Variable declaration and initialization in one line
  cout << myNum << endl;
    
  double myDoulbe; // Variable declaratration without intitialization
  myDoulbe = 56.1;
  cout << "This is double variable - " <<myDoulbe<< "\nthis is an int variable " << myNum << "\n"; /*Similar to string concatenation in java , 
  just '+' is replaced with "<<" */

  //this is single line comment

  /*this is a multiline 
  comment*/

  int x;
  double y;
  cout << "Type an integer number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard 
  cout << "Type a double number :";
  cin >> y; 
  cout << "Your sum is :"<< x+y << "\n";

  string greeting = "Hello";
  cout << greeting << "\n";

  
  return 0;
}