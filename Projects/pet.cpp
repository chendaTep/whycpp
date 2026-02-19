#include <chrono>
#include <iostream>
#include <ostream>
#include <string>
#include <thread>

class Pet {
private:
  std ::string name;
  int hungry;
  int happiness;
  int energy;

public:
  Pet(std ::string n) {
    name = n;
    hungry = 50;
    happiness = 50;
    energy = 50;
  }
  void loading(std ::string message);
  void feed();
  void fun();
  void nap();
  void displayInfo();
};

int main() {
  std ::string name;
  std ::cout << "How do you want to name your pet?" << std ::endl;
  getline(std ::cin, name);
  std ::cout << "\n";
  Pet ob(name);
  ob.displayInfo();
  std ::cout << "\n";
  ob.fun();
  std ::cout << "\n";
  ob.feed();
  std ::cout << "\n";
  ob.fun();
  std ::cout << "\n";
  ob.nap();
  std ::cout << "\n";
  ob.displayInfo();
  return 0;
}

void Pet::loading(std ::string message) {
  std ::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 9; i++) {
    std ::cout << "\r" << message << frame[i % 3] << " " << std ::flush;
    std ::this_thread::sleep_for(std ::chrono::milliseconds(400));
  }

  std ::cout << "\r" << message << " " << "completed!" << std ::endl;
}
void Pet::displayInfo() {
  int time{5};
  std ::cout << std ::string(time, '=') << " Pet Stats "
             << std ::string(time, '=') << std ::endl;
  std ::cout << "Name:" << name << std ::endl;
  std ::cout << "Happiness:" << happiness << std ::endl;
  std ::cout << "Hunger:" << hungry << std ::endl;
  std ::cout << "Energy:" << energy << std ::endl;

  if (hungry > 70) {
    std ::cout << name << "Very hungry!" << std ::endl;
  }
  if (happiness > 70) {
    std ::cout << name << "Happy!" << std ::endl;
  }
}
void Pet::nap() {
  energy += 10;
  if (energy > 100) {
    energy = 100;
  }
  hungry -= 5;
  loading("Sleeping");
  std ::cout << name << " " << "took a nap!" << " " << "Energy:" << energy
             << std ::endl;
}
void Pet::fun() {
  happiness += 30;
  if (happiness > 100) {
    happiness = 100;
  }
  hungry += 10;
  loading("Playing");
  std ::cout << name << " " << "had fun! " << "  " << "Happiness:" << happiness
             << std ::endl;
}
void Pet::feed() {
  hungry -= 10;
  if (hungry < 0) {
    hungry = 0;
  }
  loading("Feeding");
  std ::cout << name << " " << "ate food!" << " " << "Hunger:" << hungry
             << std ::endl;
}
