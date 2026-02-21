#include <chrono>
#include <iostream>
#include <string>
#include <thread>

class Person {
protected:
  std ::string name;
  int age;
  int id;

public:
  // Person(std ::string n, int a, int ID) : name(n), age(a), id(ID) {}
  Person() : name("Unknown"), age(0), id(0) {}
  void askName();
  void askAge();
  void askId();
  void displayInfo();
  void loading(std ::string message);
};

int main() {
  Person ob;
  ob.askName();
  ob.askAge();
  ob.askId();
  ob.loading("Saving info");
  ob.displayInfo();

  return 0;
}

void Person ::displayInfo() {

  int length{5};
  std ::cout << std ::string(length, '=') << " " << "Your Information" << " "
             << std ::string(length, '=') << std ::endl;
  std ::cout << "Name: " << name << std ::endl;
  std ::cout << "Age: " << age << std ::endl;
  std ::cout << "ID: " << id << std ::endl;
  std ::cout << std ::string(length, '=') << " "
             << "Make sure that your information is correct !!" << " "
             << std ::string(length, '=') << std ::endl;
  std ::cout << std ::string(length * 3 - 3, ' ')
             << std ::string(length * 6, '=') << std ::endl;
}
void Person ::loading(std ::string message) {

  std ::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 9; i++) {
    std ::cout << "\r" << message << frame[i % 3] << std ::flush;
    std ::this_thread::sleep_for(std ::chrono ::milliseconds(400));
  }
}
void Person ::askName() {
  std ::cout << "Enter your Full Name : " << std ::endl;
  getline(std ::cin >> std ::ws, name);
}
void Person ::askAge() {
  std ::cout << "Enter your age:" << std ::endl;
  std ::cin >> age;
}
void Person ::askId() {
  std ::cout << "Enter your ID:" << std ::endl;
  std ::cin >> id;
}
