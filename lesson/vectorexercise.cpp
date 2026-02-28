#include <iostream>
#include <vector>

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
  for (const auto &element : add_student) {

    std ::cout << element;
  }

  /*for (std::string student_name : add_student) {
    std::cout << (j + 1) << ". " << student_name << std ::endl;
    j++;
  } */
  for (int j = 0; j < add_student.size(); j++) {
    std ::cout << (j + 1) << ". " << add_student[j] << std::endl;
  }

  std ::vector<std::string> find_teacher = {"Dave", "Edwin", "Lucien", "Diego",
                                            "David"};
  std ::cout << "Enter teacher name to search:";
  // std :: cin >> find_teacher ;
  return 0;
}
