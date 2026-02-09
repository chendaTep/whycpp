#include <iostream>
#include <string>

struct Expense {
  std ::string description;
  double amount;
};

int main() {
  int numExpenses;
  std ::cout << "How many expenses to track:" << std ::endl;
  std ::cin >> numExpenses;

  while (numExpenses <= 0) {
    std ::cout << "Please at least track one description dude!!" << std ::endl;
    std ::cin >> numExpenses;
  }

  Expense *expenses = new Expense[numExpenses];
  std ::cin.ignore();

  for (int i = 0; i < numExpenses; i++) {

    std ::cout << "Please enter expense " << (i + 1)
               << "description: " << std::endl;
    getline(std ::cin, expenses[i].description);

    std ::cout << "Enter amount:" << std ::endl;
    std ::cin >> expenses[i].amount;

    std ::cin.ignore();
  }

  std ::cout << "===== Your Expenses ===== " << std ::endl;
  for (int i = 0; i < numExpenses; i++) {
    std ::cout << (i + 1) << ". " << expenses[i].description << " - "
               << expenses[i].amount << std::endl;
  }

  double total = 0;
  for (int i = 0; i < numExpenses; i++) {
    total += expenses[i].amount; // add each amount
  }
  std ::cout << "Total spent: " << total;

  delete[] expenses;
  return 0;
}
