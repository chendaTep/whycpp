#include <chrono>
#include <iostream>
#include <limits>
#include <string>
#include <thread>

void loading(std ::string message);
void addTeacher();
void addStudent();
void createCourse();
void assignTeacher();
void enrollStudent();
void displayCourse();
void invalidOption();
int main() {
  int choice;
  do {
    std ::cout << std ::string(12, '=') << " Choose one option "
               << std ::string(12, '=') << std ::endl;
    std ::cout << std ::string(6, '=') << " Menu " << std ::string(6, '=')
               << std ::endl;
    std::cout << "1.Add Teacher" << std ::endl;
    std::cout << "2.Add Student" << std ::endl;
    std ::cout << "3.Create Course" << std ::endl;
    std ::cout << "4.Assign Teacher to course" << std ::endl;
    std ::cout << "5.Enroll studnet to course " << std ::endl;
    std ::cout << "6.Display course" << std ::endl;
    std ::cout << "7.Exit" << std ::endl;
    std ::cout << "Choose from 1-7: ";
    std::cin >> choice;
    std ::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (choice) {
    case 1:
      addTeacher();
      break;
    case 2:
      addStudent();
      break;
    case 3:
      createCourse();
      break;
    case 4:
      assignTeacher();
      break;
    case 5:
      enrollStudent();
      break;
    case 6:
      displayCourse();
    case 7:
      invalidOption();
      return 0;
      break;

      /*default:
        std ::cout << "Invalid choice!" << std ::endl;
        ;
        std ::cout << "Make sure that you choose the option above!" <<
        std::endl; break;*/
    }
  }

  while (choice != 7);
  return 0;
}

void loading(std ::string message) {
  std ::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 6; i++) {
    std ::cout << "\r" << message << frame[i % 3] << std ::flush;
    std ::this_thread ::sleep_for(std ::chrono::milliseconds(400));
  }
}
void addTeacher() {
  std ::string teacher_name;

  std ::cout << std ::string(6, '=') << " Add Teacher " << std ::string(6, '=')
             << std ::endl;
  std ::cout << "Please enter teacher's name:"; //<< std ::endl;
  std ::getline(std ::cin, teacher_name);
  // std ::cin.ignore();
  std ::cout << "\n";
  loading("Teacher is adding");
  std ::cout << "\n";
  std ::cout << "Teacher name " << teacher_name
             << " has been added to the class!" << std ::endl;
}
void addStudent() {
  std ::string student_name;
  std ::cout << std ::string(6, '=') << " Add Student " << std ::string(6, '=')
             << std ::endl;
  std ::cout << "Please enter student's name:";
  std ::getline(std ::cin, student_name);
  // std ::cin.ignore();
  std ::cout << "\n";
  loading("Student is adding");
  std ::cout << "\n";
  std ::cout << "Student name " << student_name
             << " has been added to the class!" << std ::endl;
}
void createCourse() {
  std ::string course_name;
  std ::cout << std ::string(6, '=') << " Course request "
             << std ::string(6, '=') << std ::endl;
  std ::cout << "Enter course's name:"; // << std ::endl;
  std ::getline(std::cin, course_name);
  loading("Course is adding ");
  std ::cout << "\n";
  std ::cout << course_name << " has been added to the class!" << std ::endl;
}
void assignTeacher() {
  std ::cout << std ::string(6, '=') << " Assign Teacher "
             << std ::string(6, '=') << std ::endl;
  // array
  std ::cout << "Choose teacher to assign:";
}
void enrollStudent() {
  std ::string name_for_enrollment;
  std ::string number_phone;
  std ::cout << std ::string(6, '=') << " Enrollment " << std ::string(6, '=')
             << std ::endl;
  std ::cout << "Enter your name : " << std ::endl;
  std ::getline(std ::cin, name_for_enrollment);
  loading("Adding a your name to the system");
  std ::cout << "\n";
  std ::cout << "Enter your phone number: " << std ::endl;
  std ::cin >> number_phone;
  std ::cout << "Name: " << name_for_enrollment << std ::endl;
  std ::cout << "Phone number: " << number_phone << std ::endl;
}
void displayCourse() {
  std ::string course_subject[4] = {"Math", "Science", "English", "Reading"};
  std ::cout << std ::string(6, '=') << "  Course Avialible "
             << std ::string(6, '=') << std ::endl;
  for (int i = 0; i < 4; i++) {

    std ::cout << (i + 1) << "." << course_subject[i] << std ::endl;
  }
  std ::cout << std ::string(30, '=') << std ::endl;
}
void invalidOption() {
  std ::cout << "Invalid choice!" << std ::endl;
  std ::cout << "Please choose the right option!" << std ::endl;
}
