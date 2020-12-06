/*Wilfrido Varela   12/5/2020   Dr_McMillan
Implementing a calculator based upon the following algorithm
*/

#include <iostream>
#include <cstring>
#include "Input_Validation_Extended.h"
using namespace std;

int main() 
{   
  double num1 = 0.0, num2 = 0.0;
  string operation = " ";
  char answer = '\0';
do 
{
  cout << "\nPlease enter your first number: " << endl;
  num1 = validateDouble(num1); //inputting num1
  cout << "Please enter your second number: " << endl;
  num2 = validateDouble(num2);  //inputting num2

  cout << "\nPlease enter the operator you want to use (+,-,*,/)('add','subtract','multiply','divide'): " << endl;
  operation = validateString(operation);
  if (operation == "add" || operation == "+")
  {
    cout << num1 << "+" << num2 << " = " << num1 + num2;
    cout << "\nPress any button to run again. If not, press 2:" << endl;
    cin >> answer;
  }
  else if (operation == "subtract" || operation == "-")
  {
    cout << num1 << "-" << num2 << " = " << num1 - num2;
    cout << "\nPress any button to run again. If not, press 2:" << endl;
    cin >> answer;
  }
  else if (operation == "multiply" || operation == "*")
  {
    cout << num1 << "*" << num2 << " = " << num1 * num2;
    cout << "\nPress any button to run again. If not, press 2:" << endl;
    cin >> answer;
  }
  else if (operation == "divide" || operation =="/")
  {
    cout << num1 << "/" << num2 << " = " << num1 / num2;
    cout << "\nPress any button to run again. If not, press 2:" << endl;
    cin >> answer;
  }
  else 
  {
    cout << "Error, please try again.";
  }

}while (answer != '2'); //DeMorgan's Law is applied here
cout << "Thank you for trying me, good bye. " << endl;


return 0;
}