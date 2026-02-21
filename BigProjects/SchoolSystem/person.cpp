#include "person.h"
#include <chrono>
#include <iostream>
#include <thread>

Person::Person() : name("Unknown"), age(0), id(0) {}

void Person::askName() {
  std::cout << "Enter your Full Name: ";
  getline(std::cin >> std::ws, name);
}

void Person::askAge() {
  std::cout << "Enter your age: ";
  std::cin >> age;
}

void Person::askId() {
  std::cout << "Enter your ID: ";
  std::cin >> id;
}

void Person::displayInfo() {
  int length{5};

  std::cout << std::string(length, '=') << " Your Information "
            << std::string(length, '=') << std::endl;

  std::cout << "Name: " << name << std::endl;
  std::cout << "Age: " << age << std::endl;
  std::cout << "ID: " << id << std::endl;

  std::cout << std::string(length, '=') << " Make sure it's correct "
            << std::string(length, '=') << std::endl;
}

void Person::loading(std::string message) {
  std::string frame[] = {".", "..", "..."};

  for (int i = 0; i < 9; i++) {
    std::cout << "\r" << message << frame[i % 3] << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
  }
}
