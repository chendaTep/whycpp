#include "student.h"
#include <iostream>
#include <string>

Student::Student(const std::string &std_n, int std_a, int std_i)
    : student_name(std_n), student_age(std_a), student_id(std_i) {}

std::string Student::getName() const { return student_name; }

int Student::getId() const { return student_id; }

int Student::getAge() const { return student_age; }

void Student::displayInfo() const {
  int bar_length = 6;
  std::cout << std::string(bar_length, '=') << " Student Info "
            << std::string(bar_length, '=') << std::endl;
  std::cout << "Name: " << student_name << std::endl;
  std::cout << "Age: " << student_age << std::endl;
  std::cout << "ID: " << student_id << std::endl;
}
