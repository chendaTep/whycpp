#include <iostream>
#include <list>
#include <vector>

int main() {
  // little bit of vector

  std::vector<std::string> cars = {"Tesla", "Toyota", "Volvo", "Ragne Rover"};
  // to use for loop in this vector like we use this one instead of the
  // traditional one the one we use is for each loop
  int i = 0;
  for (std ::string car : cars) {
    std ::cout << (i + 1) << ". " << car << std ::endl;
    i++;
  };
  std ::string car_name = "Ford";
  // to access we can use
  cars.push_back("Mclaren");
  cars.push_back(car_name);
  cars.pop_back();
  for (std ::string car : cars) {
    std ::cout << (i + 1) << ". " << car << std ::endl;
    i++;
  };
  // use the second one is safer
  cars[3] = "Opel";

  std ::cout << cars[3] << std ::endl;
  // use this better and safer
  cars.at(3) = "Mercesdes";
  std ::cout << cars.at(3) << std ::endl;
  std::cout << cars.size() << std ::endl; // to check the size of vector

  std ::cout << cars.empty()
             << std ::endl; // to check if the vector is empty or not
  std ::vector<int> nth = {};
  std ::cout << nth.empty() << std ::endl;
  std ::cout << nth.size() << std::endl;

  // list data structure

  std::list<std::string> formula_one = {"Red Bull", "Cadilac", "Racing Bull"};
  std ::cout << formula_one.return 0;
}
