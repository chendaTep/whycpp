#include <iostream>
#include <string>

class Student {

private:
  std ::string name;
  int studentId;
  double grade;

public:
  Student(std ::string n, int s, double g) {
    name = n;
    studentId = s;
    grade = g;
  }

  void setGrade(double g) {
    grade = g;
    std ::cout << "Grade update to : " << g << std ::endl;
  }
  double getGrade() { return grade; }
  void displayInfo() {
    std ::cout << "========= Student information ==========" << std ::endl;
    std ::cout << "Student name : " << name << std ::endl;
    std ::cout << "Student ID : " << studentId << std ::endl;
    std ::cout << "Grade : " << grade << std ::endl;
  }

  std ::string getLetterGrade() {
    if (grade >= 90) {
      return "A";
    } else if (grade >= 80) {
      return "B";

    } else if (grade >= 70) {
      return "C";

    } else if (grade >= 60) {
      return "D";

    } else if (grade >= 50) {
      return "E";

    } else {
      return "F";
    }
  }
};

int main() {

  Student student1("Tep Chenda", 23492, 86.57);
  std ::cout << std ::endl;
  student1.displayInfo();
  std ::cout << std ::endl;
  std ::cout << "Letter Grade : " << student1.getLetterGrade() << std ::endl;
  student1.setGrade(92.10);
  std ::cout << "Updated grade to : " << student1.getLetterGrade()
             << std ::endl;

  student1.displayInfo();
  std ::cout << std ::endl;
  std ::cout << "Letter Grade :" << student1.getLetterGrade() << std ::endl;

  return 0;
}
