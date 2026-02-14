#include <iostream>
#include <string>

class Myclass {
public:
  Myclass() {

    std ::cout << "This is a like sth like fucntion  but just called it "
                  "whenever we want  that have name as the class "
               << std ::endl;
  }

}; // there is also the that type of fucntion with parameter like that too

// ----- Contructor overlaoding are sth like has the same name in the class

class f1 {
public:
  std ::string team;
  std ::string driver;
  f1() {
    team = "Unknown ";
    driver = "Unknown";
  }
  f1(std ::string t, std ::string d) {
    team = t;
    driver = d;
  }
};
// there is an Encapsulation like that is a private but we can acess it by using
// get and set

class Employee {
private:
  int salary;

public:
  void setSalary(int s) { salary = s; }
  int getter() { return salary; }
};
class cars {

public:
  std ::string brand;
  std ::string model;
  int year;
  cars(std ::string x, std ::string y, int z) {
    brand = x;
    model = y;
    year = z;
  }
};

int main() {
  Myclass obj;
  cars obj1("Telsa", "Model Y", 2025);
  std ::cout << obj1.brand << obj1.model << obj1.year << std ::endl;
  f1 idk1;
  f1 idk("Red Bull", "Versteppen");
  std ::cout << idk.team << idk.driver << std ::endl;
  std ::cout << idk1.team << idk1.driver << std ::endl;
  Employee showSalary;
  showSalary.setSalary(2000);
  std ::cout << showSalary.getter();
  return 0;
}
