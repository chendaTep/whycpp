#include <iostream>
#include <string>

class Employee {
private:
  int salary;

public:
  Employee(int s) { salary = s; }
  friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {

  std ::cout << "Salary: " << emp.salary << std ::endl;
}

int main() {
  Employee myemp(4000);
  displaySalary(myemp);

  return 0;
}
