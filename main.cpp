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
  cout << "Please enter your first number: " << endl;
  num1 = validateDouble(num1);
  cout << "Please enter your second number: " << endl;
  num2 = validateDouble(num2);

  cout << "Please enter the operator you want to use (+,-,*,/)('add','subtract','multiply','divide'): " << endl;
  cin >> operation;
  if (operation == "add" || operation == "+")
  {
    cout << num1 << "+" << num2 << " = " << num1 + num2;
    cout << "\nRun again? (1 = yes, 2 = no)";
    cin >> answer;
  }
  else if (operation == "subtract" || operation == "-")
  {
    cout << num1 << "-" << num2 << " = " << num1 - num2;
    cout << "\nRun again? (1 = yes, 2 = no)";
    cin >> answer;
  }
  else if (operation == "multiply" || operation == "*")
  {
    cout << num1 << "*" << num2 << " = " << num1 * num2;
    cout << "\nRun again? (1 = yes, 2 = no)";
    cin >> answer;
  }
  else if (operation == "divide" || operation =="/")
  {
    cout << num1 << "/" << num2 << " = " << num1 / num2;
    cout << "\nRun again? (1 = yes, 2 = no)";
    cin >> answer;
  }
  else 
  {
    cout << "Error, please try again.";
  }
  
}while (answer != '2');
cout << "Thank you for trying me, good bye. " << endl;


return 0;
}