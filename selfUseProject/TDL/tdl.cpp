#include <cstddef>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <vector>

struct TDL {
  std::string todo_list;
  // int priority;
  // std::string dateCreated;
  // bool isDone;
};
void addTDL(std::vector<TDL> &to_do_list);
void removeTDL(std::vector<TDL> &to_do_list);
void showAllTDL(const std::vector<TDL> &to_do_list);
int main() {
  std::vector<TDL> to_do_list;
  int choice;
  do {
    std::cout << std::setw(10) << std::string(6, '>') << " Menu "
              << std::string(6, '<') << std::endl;
    std::cout << std::setw(5)
              << "  1.Add To-Do-Lists\n  2.Remove To-Do-Lists\n  3.Show "
                 "To-Do-Lists\n  4.Exit! "
              << std::endl;
    std::cout << std::setw(10) << "Choose option:";
    std::cin >> choice;
    std::cout << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (choice) {
    case 1:
      addTDL(to_do_list);
      break;
    case 2:
      removeTDL(to_do_list);
      break;
    case 3:
      showAllTDL(to_do_list);
      break;
    case 4:
      std::cout << "Have a nice day!" << std::endl;
      return 0;
    }

  } while (choice != 4);

  return 0;
}

void addTDL(std::vector<TDL> &to_do_list) {
  TDL ask;
  std::cout << std::setw(10) << std::string(6, '>') << " Add To-Do-Lists "
            << std::string(6, '<') << std::endl;
  std::cout << std::setw(5) << "Enter description:";
  getline(std::cin, ask.todo_list);
  to_do_list.push_back(ask);
}
void removeTDL(std::vector<TDL> &to_do_list) {

  if (to_do_list.empty()) {
    std::cout << "There is nothing here to remove!" << std::endl;
    return;
  }
  std::cout << std::setw(10) << std::string(6, '>') << " Remove TO-Do-Lists "
            << std::string(6, '<') << std::endl;

  for (size_t i = 0; i < to_do_list.size(); i++) {
    std::cout << (i + 1) << ". " << to_do_list[i].todo_list << std::endl;
  }
  int task_num;
  std::cout << std::setw(5) << "Enter description(number) to remove:";
  if (!(std::cin >> task_num)) {
    std::cout << "Invalid!\n Please enter only number please";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return;
  }
  if (task_num > 0 && task_num <= static_cast<int>(to_do_list.size())) {
    int target = task_num - 1;
    std::string remove_tdl = to_do_list[target].todo_list;
    to_do_list.erase(to_do_list.begin() + target);
    std::cout << remove_tdl << " has been removed sucessfully!" << std::endl;

  } else {
    std::cout << task_num << " does not exit!" << std::endl;
    return;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void showAllTDL(const std::vector<TDL> &to_do_list) {
  std::cout << std::setw(10) << std::string(6, '>') << " Your To-Do-List "
            << std::string(6, '<') << std::endl;
  if (to_do_list.empty()) {
    std::cout << "There is nothing to show now!" << std::endl;

  } else {
    for (size_t i = 0; i < to_do_list.size(); i++) {
      std::cout << (i + 1) << ". " << to_do_list[i].todo_list << std::endl;
    }
  }
}
