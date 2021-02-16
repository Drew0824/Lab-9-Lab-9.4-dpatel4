#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int num1;
  
  
  cout << "Enter you Name:\n";
  cin >> name;

  cout << "Enter number between 1 and 5\n";
  cin >> num1;

  if (num1 == 1)
    cout << "Hello\n" << name; 
  
  else if (num1 == 2)
    cout << "Welcome\n" << name;
  
  else if (num1 == 3)
    cout << "Whats up\n" << name; 
  
  else if (num1 == 4)
    cout << "Hey\n" << name;
  
  else if (num1 == 5)
    cout << "Hola\n" << name;

}