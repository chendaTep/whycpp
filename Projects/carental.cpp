#include <iostream>
#include <string>

class Car {

private:
  std ::string brand;
  std ::string model;
  int year;
  double pricePerDay;
  bool isRented;

public:
  Car(std ::string b, std ::string m, int y, double p) {

    brand = b;
    model = m;
    year = y;
    pricePerDay = p;
    isRented = false;
  }

  void rentCar(int days) {

    if (!isRented) {
      double total = days * pricePerDay;
      isRented = true;
      std ::cout << ""
    }
  }
};
