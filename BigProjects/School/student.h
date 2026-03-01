#pragma once
#include <string>

class Student {
private:
  std::string student_name;
  int student_age;
  int student_id;

public:
  Student(const std::string &std_n, int std_a, int std_i);
  std::string getName() const;
  int getId() const;
  int getAge() const;
  void displayInfo() const;
};
