#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person {
protected:
  std::string name;
  int age;
  int id;

public:
  Person();

  void askName();
  void askAge();
  void askId();
  void displayInfo();
  void loading(std::string message);
};

#endif // !PERSON_H
// #define PERSON_H
// #include <string>
