#include <iostream>
#include <limits>

// this is to avoid error check the input like the value
int main() {
  int any_num;
  std ::cout << "Enter a number:"; //  std ::endl;
  while (!(std ::cin >> any_num)) {
    std ::cout << "Number only!" << std ::endl;
    std ::cout << "Please enter a number: ";
    std ::cin.clear();
    std ::cin.ignore(1000, '\n');
  }
  std ::cout << "Yoou entered: " << any_num << std ::endl;
  std ::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std ::string any_name;

  do {
    std::cout << "Enter your name:";
    std ::getline(std::cin, any_name);
  } while (any_name.empty());
  std ::cout << "Hello " << any_name;
  return 0;
}
