#include <charconv>
#include <iostream>
#include <ostream>

void changeValue(int &num) { num = 50; } // this is a normal one

void swapNum(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
} // this one pass two reference
void modifyStr(std ::string &str) {
  str += "World!";
} // WE CAN ALSO USE THIS FOR THE STRING AND TWO reference TOO

void array(int myNumber[5]) {
  for (int i = 0; i <= 5; i++) {
    std ::cout << myNumber[i];
  }
}

struct Car {
  std ::string cars;
  int year;
};
void myNew(Car c) {
  std ::cout << "This is " << c.cars << "Year:" << c.year;
} // we also use that to change data too just use the  (Car& c)
int main() {
  int value = 10;
  changeValue(value);
  std ::cout << value; // this use just to change one value of the reference

  int firstNum;
  int secondNum;
  std ::cout << " Enter the first number: " << std ::endl;
  std ::cin >> firstNum;
  std ::cout << "Enter the second number:" << std ::endl;
  std ::cin >> secondNum;
  std ::cout << "Before swap: " << std::endl;
  std ::cout << firstNum << secondNum << std ::endl;
  swapNum(firstNum, secondNum);
  std ::cout << "This is after swap:" << std ::endl;
  std ::cout << firstNum << secondNum;

  std ::string ciao = "Hello ";
  modifyStr(ciao);
  std ::cout << ciao << std ::endl;

  int myNumber[5] = {10, 20, 30, 40, 50};
  array(myNumber);

  Car newCar = {"Toyota", 2024};
  myNew(newCar);

  return 0;
}
