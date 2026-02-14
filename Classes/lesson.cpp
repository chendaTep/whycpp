#include <iostream>
#include <string>
class Myclass {

public:
  int number;
  std ::string name;
}; // class can be used with many objects
class Book {
public:
  std ::string title;
  std ::string author;
  int year;
};
class My2class {
public:
  void idk() { std ::cout << "Help me please man !!1" << std ::endl; }
}; // this is one method to use this and there is an other one

class notMine {

public:
  void why();
};
class Boss {
public:
  int value(int maxSpeed);
};

class Dog {
public:
  void bark();
};

int Boss ::value(int maxSpeed) { return maxSpeed; }

int main() {
  Myclass myObj;

  std ::cout << "Enter name : " << std ::endl;
  getline(std ::cin, myObj.name);
  std ::cout << "Enter age :  " << std ::endl;
  std ::cin >> myObj.number;
  std ::cin.ignore();
  std ::cout << "Your name is " << myObj.name << " " << "and your are "
             << myObj.number << "year old." << std ::endl;
  Book myObj1, myObj2;

  myObj1.title = "Matilda ";
  myObj1.author = "Roald Dalh ";
  myObj1.year = 1988;
  myObj2.title = "The giving tree ";
  myObj2.author = "Shel Silverstein";
  myObj2.year = 1964;

  std ::cout << myObj1.title << ", " << myObj1.author << ", " << myObj1.year
             << std ::endl;
  std ::cout << myObj2.title << ", " << myObj2.author << ", " << myObj2.year
             << std ::endl;
  My2class myNew;
  myNew.idk();
  notMine myOld;
  myOld.why();
  Boss chenda;

  std ::cout << chenda.value(200) << std ::endl;
  Dog golden;
  golden.bark();
  return 0;
}

void notMine::why() { std ::cout << "Why am i here ! " << std ::endl; }
void Dog ::bark() { std ::cout << "Woof!" << std ::endl; }
