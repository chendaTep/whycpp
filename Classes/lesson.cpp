#include <iostream>
#include <string>
class Myclass {

public:
  int number;
  std ::string name;
};

int main() {
  Myclass myObj;

  std ::cout << "Enter name : " << std ::endl;
  getline(std ::cin, myObj.name);
  std ::cout << "Enter age :  " << std ::endl;
  std ::cin >> myObj.number;
  std ::cin.ignore();
  std ::cout << "Your name is " << myObj.name << " " << "and your are "
             << myObj.number << "year old." << std ::endl;

  return 0;
}
