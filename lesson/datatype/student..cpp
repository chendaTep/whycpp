#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <limits>
#include <thread>
#include <vector>
struct Student {
  std::string name;
  float score;
};
//      decoration     //
void boxShape(std::string title, int indent);
void loading(std::string message);
//   usable fucntion   //
void addStudent(std::vector<Student> &student);
void removeStudent(std::vector<Student> &student);
void showAllStudent(const std::vector<Student> &student);
void showHighestStudent(std::vector<Student> &student);
// main fucntion //
int main() {
  std::vector<Student> student;
  int choice;
  do {
    boxShape("Welcome To ASC International School", 10);
    std::cout << std::setw(10) << std::string(6, '>') << " Menu "
              << std::string(6, '<') << std::endl;
    std::cout << std::setw(5)
              << "1.Add Student\n 2.Remove Student\n 3. Show All Student\n "
                 "4.Show Top Student\n 5.Exit! ";
    std::cout << "Choose one option:";
    if (std::cin >> choice) {
      std::cout << "You chose option " << choice << std::endl;
      loading("Loading");
      std::cout << "\n";
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
      std::cout << "Option must be type in a number!" << std::endl;
      loading("Loading back to Menu");
    }
    switch (choice) {
    case 1:
      addStudent(student);
      break;
    case 2:
      removeStudent(student);
      break;
    case 3:
      showAllStudent(student);
      break;
    case 4:
      showHighestStudent(student);
      break;
    case 5:
      std::cout << "Have a nice day!" << std::endl;
      loading("Exiting");
      break;
      return 0;
    }
  } while (choice);
  return 0;
}
void loading(std::string message) {
  srand(time(0));
  int iratations = (rand() % 10 + 3);
  std::string frame[] = {".", "..", "..."};
  for (int i = 0; i < iratations; i++) {
    std::cout << "\r" << message << frame[i % 3] << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
  }
}
void addStudent(std::vector<Student> &student) {
  boxShape("Add Student", 10);
  std::cout << "\n";
  Student s;
  std::cout << std::string(50, '=') << std::endl;
  std::cout << std::setw(10) << std::string(6, '>') << " Add Student here "
            << std::endl;
  std::cout << "Enter your name:";
  getline(std::cin, s.name);
  std::cout << "\n";
  std::cout << "Enter your score:";
  std::cin >> s.score;
  student.push_back(s);
}
void boxShape(std::string title, int indent) {
  int padding = 4; // spaces on each side of the title
  int innerWidth = title.length() + (padding * 2);
  int totalWidth = innerWidth + 2; // +2 for the '=' borders

  std::string topBottom(totalWidth, '*');
  std::string empty = "*" + std::string(innerWidth, ' ') + "*";
  std::string middle =
      "*" + std::string(padding, ' ') + title + std::string(padding, ' ') + "*";

  std::cout << topBottom << std::endl;
  std::cout << empty << std::endl;
  std::cout << middle << std::endl;
  std::cout << empty << std::endl;
  std::cout << topBottom << std::endl;
}
void removeStudent(std::vector<Student> &student) {
  boxShape("Remove student", 10);
  std::cout << "\n";
  bool found = false;
}
