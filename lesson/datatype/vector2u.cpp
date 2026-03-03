#include <chrono>
#include <cstddef>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <thread>
#include <vector>
// struct for the project
struct Product {
  float amount;
  std::string product_name;
};
// >>>>>>>>>>>> Fuction <<<<<<<<<<<<<<<
void loading(std::string message);
void addProduct(std::vector<Product> &cart);
void removeProduct(std::vector<Product> &cart);
void showProduct(const std::vector<Product> &cart);

/*std::string toLower(std::string str){
  for (char &c : str) {
    c = std::toLower(c);
  }
  return str;
}*/
int main() {
  std::vector<Product> cart;
  int choice;
  do {
    std ::cout << std ::setw(10) << std::string(6, '>')
               << " Welcome to Chenda & Pisey Shop " << std ::string(6, '<')
               << std ::endl;
    std::cout << std ::setw(17) << std::string(6, '>') << " Menu "
              << std ::string(6, '<') << std ::endl;
    std ::cout
        << std::setw(6)
        << " \n 1. Add Product\n 2. Remove Product\n 3. Show Product\n 4. "
           "Exit!!\n ";
    std ::cout << "Choose one option:";
    if (std::cin >> choice) {

      std ::cout << "You chose option " << choice << std ::endl;
      loading("Loading");
      std ::cout << "\n";
    } else {
      std ::cout << "Must type in a number!!" << std ::endl;
      loading("Loading back to the Menu");
      std::cout << "\n";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (choice) {
    case 1:
      addProduct(cart);
      break;
    case 2:
      removeProduct(cart);
      break;
    case 3:
      showProduct(cart);
      break;
    case 4:
      std ::cout << "Thanks for your time with us!" << std ::endl;
      loading("Exiting");
      break;
    }

  } while (choice != 4);

  return 0;
}

void loading(std::string message) {
  std::string frame[] = {".", "..", "..."};
  for (int i = 0; i < 9; i++) {
    std::cout << "\r" << message << frame[i % 3] << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
  }
}
void addProduct(std::vector<Product> &cart) {
  Product p;
  std::string display_product[5] = {"Ram", "CPU", "Main Board", "SSD/HDD",
                                    "GPU"};
  // display show the product availiable
  //
  std::cout << std::setw(10) << std::string(6, '>') << " Product availiable "
            << std::string(6, '<') << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << (i + 1) << ". " << display_product[i] << std::endl;
  }
  // terminal interface
  std ::cout << std::setw(10) << std::string(6, '>') << " Add Product "
             << std ::string(6, '<') << std::endl;
  std ::cout << "Enter the name of the product:";
  getline(std::cin, p.product_name);
  std ::cout << "Enter the amount you want:";
  std ::cin >> p.amount;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  cart.push_back(p);
  std::this_thread::sleep_for(std::chrono::milliseconds(600));
}
void removeProduct(std::vector<Product> &cart) {
  bool found = false;
  std::string target;
  std::cout << std::setw(10) << std::string(6, '>')
            << " Remove unwanted things " << std::string(6, '<') << std::endl;
  std::cout << "Enter name's of the product to remove:";
  getline(std::cin, target);
  for (size_t i = 0; i < cart.size(); i++) {
    if (cart[i].product_name == target) {

      cart.erase(cart.begin() + i);
      break;
      loading("Finding item");
      std::cout << "Item found!" << std::endl;
      found = true;
      loading("Removing");
      std::cout << "Item removed!" << std::endl;
    }
    // std::cout<<""
  }
  if (!found) {
    std::cout << "Product not found!" << std::endl;
  }
}
void showProduct(const std::vector<Product> &cart) {
  std::cout << std::setw(10) << std::string(6, '>') << " All your product "
            << std::string(6, '<') << std::endl;
  if (cart.empty()) {
    std ::cout << "Your current cart is empty!" << std ::endl;
    std::cout << std::string(40, '-') << std::endl;
    return;

  } else {
    int i = 0;
    std ::cout << "These are the lists down of your shoping" << std ::endl;
    for (const Product &p : cart) {
      std ::cout << (i + 1) << ". " << p.product_name << " x" << p.amount
                 << std::endl;
      i++;
    }
  }
  std::this_thread::sleep_for(std::chrono::milliseconds(600));
}
