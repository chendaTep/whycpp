/// Mini shopping cart
#include <chrono>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <thread>
#include <vector>
// fuction for the project
void addProduct(std::vector<std::string> &carts);
void removeProduct(std::vector<std::string> &carts);
void showCart(const std::vector<std::string> &carts);
void laoding(std::string message);

int main() {
  std::vector<std::string> carts;
  int choice;
  do {
    std ::cout << std::setw(10) << std::string(6, '>')
               << " Welcome to Nigolia Shop " << std ::string(6, '<')
               << std ::endl;
    std ::cout << "1. Add Products" << std ::endl;
    std ::cout << "2. Remove Products" << std ::endl;
    std ::cout << "3. Show Cart" << std ::endl;
    std ::cout << "4.Exit!" << std ::endl;
    std ::cout << "Enter your choice:";
    std ::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (choice) {
    case 1:
      //  laoding("Loading");
      addProduct(carts);
      break;
    case 2:
      // laoding("laoding");
      removeProduct(carts);
      break;
    case 3:
      // laoding("Loading");
      showCart(carts);
      break;
    case 4:
      return 0;
      break;
    }
  } while (choice != 4);

  return 0;
}

void loading(std::string message) {
  std ::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 6; i++) {
    std ::cout << "\r" << message << frame[i % 3] << std ::flush;
    std ::this_thread ::sleep_for(std::chrono::milliseconds(400));
  }
}
void addProduct(std::vector<std::string> &carts) {
  std ::string add_your_product;
  std ::cout << std::setw(10) << std ::string(6, '>') << " Add Products "
             << std ::string(6, '<') << std ::endl;

  std ::cout << "Add your products here:";
  getline(std::cin, add_your_product);
  carts.push_back(add_your_product);
  loading("Adding your products");
  std::cout << "\n";
}

void removeProduct(std::vector<std::string> &carts) {
  std ::string remove_products;
  std::cout << std::setw(10) << std::string(6, '>')
            << "Remove unwanted products " << std::string(6, '<') << std::endl;
  std ::cout << "Enter the name of the product you want to remove:";
  getline(std::cin, remove_products);
  for (size_t i = 0; i < carts.size(); i++) {
    if (carts[i] == remove_products) {
      carts.erase(carts.begin() + i);
      loading("Finding the item");
      std::cout << "\n";
      std ::cout << "Item found & Item remove!" << std ::endl;
      loading("Item removed!");
    }
  }
}
void showCart(const std::vector<std::string> &carts) {
  if (carts.empty()) {
    std ::cout << "Cart is currently empty!" << std ::endl;

  } else {
    std::cout << std::setw(10) << std::string(6, '>') << " Item in cart "
              << std::string(6, '<') << std ::endl;
    for (size_t i = 0; i < carts.size(); i++) {
      std ::cout << (i + 1) << ". " << carts[i] << std ::endl;
    }
  }
}
