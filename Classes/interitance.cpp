#include <iostream>
#include <string>

class RPG {
private:
  std ::string name;
  int health;

public:
  RPG(std ::string n, int h) {
    name = n;
    health = h;
  }
  void showInfo() {
    std ::cout << "Name:" << name << std ::endl;
    std ::cout << "Health:" << health << std ::endl;
  }
  void attack() { std ::cout << "attacking!" << std ::endl; }
};

class Warrior : public RPG {
public:
  Warrior(std ::string n, int h) : RPG(n, h) {}
  void sheildBlock() { std ::cout << "Block with sheild !" << std ::endl; }
};
class Mage : public RPG {

public:
  Mage(std ::string n, int h) : RPG(n, h) {}
  void castSpell() { std ::cout << "Mage use a fireball!" << std ::endl; }
};

int main() {

  std ::string name;
  int health;
  std ::cout << "Enter name:" << std ::endl;
  getline(std ::cin, name);
  std ::cout << "Enter health:" << std ::endl;
  std ::cin >> health;
  RPG ob(name, health);
  ob.showInfo();
  Warrior warrior(name, health);
  warrior.showInfo();
  warrior.attack();
  warrior.sheildBlock();
  Mage mageOb(name, health);
  mageOb.attack();
  mageOb.castSpell();
  mageOb.showInfo();
  mageOb.attack();

  return 0;
}
