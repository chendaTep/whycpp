#include <iostream>

double add(double a, double b) { return a + b; }

double subtract(double a, double b) { return a - b; }

double multi(double a, double b) { return a * b; }

double divide(double a, double &b) {

  while (b == 0) {
    std ::cout << "Infinity" << std ::endl;
    std ::cout << "Please enter other number:" << std ::endl;
    std ::cin >> b;
  }
  return a / b;
}

int main() {
  double num1, num2;
  char operation;

  std ::cout << "Please enter the first number:" << std ::endl;
  std ::cin >> num1;

  std ::cout << "PLease enter the operation ( + , - , * , / ): " << std ::endl;
  std ::cin >> operation;
  std ::cout << "Please enter second number:" << std ::endl;
  std ::cin >> num2;
  double result;
  switch (operation) {
  case '+':
    result = add(num1, num2);
    break;
  case '-':
    result = subtract(num1, num2);
    break;
  case '*':
    result = multi(num1, num2);
    break;
  case '/':
    result = divide(num1, num2);
    break;
  default:
    std ::cout << "Invalid please enter the proper operation!!";
  }

  std ::cout << "Result: " << num1 << " " << operation << " " << num2 << " = "
             << result << std ::endl;
  ;

  return 0;
}
