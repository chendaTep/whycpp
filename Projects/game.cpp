#include <chrono>
#include <iostream>
#include <string>
#include <thread>
class Character {

private:
  std ::string name;
  int health;
  int level;

public:
  Character(std::string n) {
    name = n;
    health = 100;
    level = 1;
  }

  void attack();
  void heal();
  void levelUp();
  void displayInfo();
};
void Loading(std ::string message);

int main() {
  std ::string hero;
  std ::cout << "What hero do you want to play:" << std ::endl;
  getline(std ::cin, hero);
  Character ob(hero);
  std ::cout << "\n";
  ob.displayInfo();
  std ::cout << "\n";
  ob.attack();
  ob.attack();
  std ::cout << "\n";
  ob.heal();
  std ::cout << "\n";
  ob.levelUp();
  std ::cout << "\n";
  ob.displayInfo();
  // Loading("Waiting her reply");

  return 0;
}

void Loading(std ::string message) {

  std ::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 9; i++) {
    std ::cout << "\r" << message << frame[i % 3] << " " << std ::flush;
    std ::this_thread::sleep_for(std::chrono::milliseconds(400));
  }
  std ::cout << "\r" << message << " " << "completed!   \n " << std ::endl;
}

void Character::attack() {
  health -= 20;
  std ::cout << name << " took damage ! " << " Health : " << health
             << std ::endl;
  if (health <= 0) {
    std ::cout << name << "has been defeated ! " << std ::endl;
  }
};
void Character::heal() {
  Loading("Healing");
  health += 30;
  if (health > 100) {
    health = 100;
  }
  std ::cout << name << "healed, Health : " << health << std ::endl;
}
void Character::levelUp() {

  Loading("Leveling up ");
  level += 1;
  std ::cout << name << "reached level " << level << "!" << std ::endl;
}
void Character::displayInfo() {
  int width = 7;
  std ::cout << std::string(width, '=') << "Character Stats"
             << std ::string(width, '=') << std ::endl;
  std ::cout << "Name:" << name << std ::endl;
  std ::cout << "Health:" << health << std ::endl;
  std ::cout << "Level:" << level << std ::endl;
}
