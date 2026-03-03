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
void loading(std::string message);
void addStudent(std::vector<Student> student);
void removeStudent(std::vector<Student> student);
void showAllStudent(const std::vector<Student> student);
void showHighestStudent(std::vector<Student> student);
void boxShape(std::string title);
int main() {
  std::vector<Student> student;
  boxShape("ASC International School");
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
  std::cout << std::string(50, '=') << std::endl;
std:
  std::cout << std::setw(10) << std::string(6, '>') << " Add Student here "
            << std::endl;
}
void boxShape(std::string title) {
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
