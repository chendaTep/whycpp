#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

void addStudent();
void showStudent();

int main() {

  std ::cout << std::string(6, '>') << " Menu " << std ::string(6, '<')
             << std::endl;
  int choice;
  do {
    std ::cout << "1. Add Student " << std::endl;
    std ::cout << "2. Show Students " << std ::endl;
    std ::cout << "3. Exit " << std ::endl;
    std ::cout << "Choose one option:";
    std ::cin >> choice;
    std ::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (choice) {
    case 1:
      addStudent();
      break;
    case 2:
      showStudent();
      break;
    case 3:
      return 0;
      break;
    }
  }

  while (choice != 3);

  return 0;
}

void addStudent() {
  std::vector<std::string> option_one;
  std ::string ask_for_student;
  for (std::string option1 : option_one) {
    std::cout << "Enter your name:";
    getline(std::cin, ask_for_student);
    option_one.push_back(ask_for_student);
  }
}
void showStudent() {}
