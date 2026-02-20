#include <chrono>
#include <iostream>
#include <string>
#include <thread>

class Inventory {
private:
  std ::string items;
  int qty;
  double price;

public:
  Inventory(std ::string i, int q, double p) : items(i), qty(q), price(p) {}
  double totalPrice();

  void loading(std ::string message);
  void displayInfo();
  void sell(int amount);
  void stock(int amount);
  void update();
};

int main() {
  std ::string item;
  std ::cout << "Enter item name:" << std ::endl;
  getline(std ::cin, item);
  std ::cout << "\n";
  int quantity;
  std ::cout << "Enter initial quantity: " << std ::endl;
  std ::cin >> quantity;
  double pricePerItem;
  std ::cout << "Enter price per item:" << std ::endl;
  std ::cin >> pricePerItem;

  Inventory ob(item, quantity, pricePerItem);
  ob.displayInfo();
  int restocking;
  std ::cout << "Enter the amount of restocking:" << std ::endl;
  std ::cin >> restocking;
  ob.stock(restocking);
  int selling;
  std ::cout << "Enter the amount you want to buy:" << std ::endl;
  std ::cin >> selling;
  ob.sell(selling);
  ob.displayInfo();
  std ::cout << "Enter the amount you want to buy:" << std ::endl;
  std ::cin >> selling;
  ob.update();
  ob.displayInfo();

  return 0;
}

void Inventory::loading(std ::string message) {
  std ::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 6; i++) {
    std ::cout << "\r" << message << " " << frame[i % 3] << std ::flush;
    std ::this_thread::sleep_for(std ::chrono ::milliseconds(400));
  }
  std ::cout << "\n" << message << " " << "completed!" << std ::endl;
}

void Inventory::displayInfo() {
  int time = 5;
  std ::cout << std::string(time, '=') << "Inventory Info"
             << std ::string(time, '=') << std ::endl;
  std ::cout << "Item:" << " " << items << std ::endl;
  std ::cout << "Qauntity:" << " " << qty << std ::endl;
  std ::cout << "Price:" << " $" << price << std ::endl;
  std ::cout << "Total price:" << " $" << totalPrice() << std ::endl;
  // std ::cout << ""
}
void Inventory::stock(int amount) {
  loading("Adding stock");
  qty += amount;
  // total = qty * price;
  std ::cout << "Added:" << " " << amount << std ::endl;
  std ::cout << "New stock:" << " " << qty << std ::endl;

  // std ::cout << "Enter the amount(re stock):" << std :: endl;
  // std :: cin >> amount ;
}
void Inventory::sell(int amount) {
  if (qty >= amount) {
    loading("Processing sales");
    double salePrice = amount * price;
    qty -= amount;
    //   total = qty * price ;
    std ::cout << "Sold" << amount << " " << items << " " << "for $ "
               << salePrice << std ::endl;

  } else {
    std ::cout << "Not enough stock! Only " << qty << " " << "avialible!"
               << std ::endl;
  }
}
void Inventory::update() {
  double newPrice;
  std ::cout << "Enter the new price:" << std ::endl;
  std ::cin >> newPrice;
  price = newPrice;
  // total = price * qty ;
  std ::cout << items << "price updated to:" << price << std ::endl;
  loading("Updating price");
}
double Inventory::totalPrice() { return qty * price; }
