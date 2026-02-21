#include <chrono>
#include <iostream>
#include <string>
#include <thread>

class Animal {
private:
  std ::string name;
  int energy;
  double age;

public:
  Animal(std ::string n, int e, double a) : name(n), energy(e), age(a) {}
  void laoding(std ::string message);
};

class Dog : public Animal {};

int main() {
  std ::string name;
  int energy;
  double age;
  Animal obj(name, energy, age);
  std ::cout << "Enter your name:" << std ::endl;
  getline(std ::cin, name);
  std ::cin.ignore();
  obj.laoding("Adding name to the system");
  std ::cout << "Enter your energy:" << std ::endl;
  std ::cin.ignore();
  std ::cin >> energy;
  obj.laoding("Adding energy to the system");
  std ::cout << "Enter your age:" << std ::endl;
  std ::cin >> age;
  obj.laoding("Adding age to the system");

  int time{20};
  std ::cout << std ::string(time, '=') << std ::endl;
  std ::cout << std ::string(time - 15, '=') << " " << "Your Stats" << " "
             << std ::string(time - 15, '=') << std ::endl;
  std ::cout << "Name: " << name << std ::endl;
  std ::cout << "Energy: " << energy << std ::endl;
  std ::cout << "Age: " << age << std ::endl;

  obj.laoding("Why is this laoding");

  return 0;
}

void Animal ::laoding(std ::string message) {
  std ::string dot[] = {".", "..", "..."};
  for (int i = 0; i < 9; i++) {

    std ::cout << "\r" << message << dot[i % 3] << std ::flush;
    std ::this_thread::sleep_for(std ::chrono ::milliseconds(400));
  }
}
