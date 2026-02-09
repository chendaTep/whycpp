#include <iostream>

float toCelcuis(float fahrenheit) { return (5.0 / 9.0) * (fahrenheit - 32.0); }
// int myFunction(int x)
// float myFunction(float x)
// double myFunction(double x, double y) // these are called fucns overrloading
// that can have the same name as long as the paramater are diff and types
int main() {

  float f_value;
  std ::cout << "Enter fahrenheit temp: " << std ::endl;
  std ::cin >> f_value;

  float result = toCelcuis(f_value);

  std ::cout << "fahrenheit:" << f_value << std ::endl;
  std ::cout << "Convert to fahrenheit to toCelcuis: " << result;

  return 0;
}
