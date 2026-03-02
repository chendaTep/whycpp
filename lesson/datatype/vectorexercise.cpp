#include <chrono>
#include <iostream>
#include <limits>
#include <string>
#include <thread>
#include <vector>
void addStudent(std::vector<std::string> &students);
void showStudent(const std::vector<std::string> &students);
void loading(std::string message);
int main() {
  std ::vector<std::string> fruits = {"Apple", "Banana", "Mango", "Oragne",
                                      "Grapes"};
  int i = 0;
  for (std ::string fruit : fruits) {
    std::cout << (i + 1) << "." << fruit << std::endl;
    i++;
  }
  // add student name

  std::string input_name_student;
  std ::vector<std::string> add_student;
  for (int j = 0; j < 3; j++) {
    std ::cout << "Enter your name:";
    getline(std::cin, input_name_student);
    add_student.push_back(input_name_student);
  }
  std ::cout << "Student in the class:" << std ::endl;
  for (size_t j = 0; j < add_student.size(); j++) {
    std ::cout << (j + 1) << ". " << add_student[j] << std::endl;
  }

  std ::vector<std::string> find_teacher = {"Dave", "Edwin", "Lucien", "Diego",
                                            "David"};

  std::string input_teacher_name;
  int add = 0;
  bool found = false;
  std ::cout << std::string(6, '=') << " All teacher display "
             << std ::string(6, '=') << std ::endl;
  // this is to show all the teacher names
  for (std ::string show_teacher_name : find_teacher) {
    std ::cout << (add + 1) << "." << show_teacher_name << std ::endl;
    add++;
  }
  std ::cout << "Enter teacher name to search:";
  std ::cin.ignore();
  getline(std::cin, input_teacher_name);

  for (std::string show_teacher_name : find_teacher) {
    if (input_teacher_name == show_teacher_name) {
      std ::cout << "Teacher found!" << std ::endl;
      found = true;
      break;
    }
  }

  if (!found) {
    std ::cout << "Teachher not found." << std ::endl;
  }
  //
  //
  //
  //
  // Menu
  std ::cout << std::string(6, '>') << " Menu " << std ::string(6, '<')
             << std::endl;
  int choice;
  std::vector<std::string> students;
  do {
    std ::cout << "1. Add Student " << std::endl;
    std ::cout << "2. Show Students " << std ::endl;
    std ::cout << "3.  Exit " << std ::endl;
    std ::cout << "Choose one option:";
    std ::cin >> choice;
    std ::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (choice) {
    case 1:
      addStudent(students);
      break;
    case 2:
      showStudent(students);
      break;
    case 3:
      loading("Exiting programming");
      return 0;
    default:
      std ::cout << "Invalid choice!" << std ::endl;
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

void loading(std::string message) {
  std::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 6; i++) {

    std ::cout << "\r" << message << frame[i % 3] << std ::flush << std ::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
  }
}
