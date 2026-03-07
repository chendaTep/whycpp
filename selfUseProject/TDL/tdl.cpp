#include <cstddef>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <vector>
// strcut for TDL
struct TDL {
  std::string todo_list;
  bool isDone{};
};
//
// file i/o to save file into permannent memory
void saveToFile(std::vector<TDL> &to_do_list);
//
// load to file to load it 
void loadFromFile (std::vector<TDL> &to_do_list); 
//
// usable function
void addTDL(std::vector<TDL> &to_do_list);
void removeTDL(std::vector<TDL> &to_do_list);
void showAllTDL(const std::vector<TDL> &to_do_list);
void markAsDone(std::vector<TDL> &to_do_list);
int main() {
  std::vector<TDL> to_do_list;
  int choice;
  do {
    std::cout << std::setw(10) << std::string(6, '>') << " Menu "
              << std::string(6, '<') << std::endl;
    std::cout << std::setw(5)
              << "  1.Add To-Do-Lists\n  2.Remove To-Do-Lists\n  3.Show "
                 "To-Do-Lists\n  4.Mark as Done\n  5.Exit!"
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
      markAsDone(to_do_list);
      break;
    case 5:
      std::cout << "Have a nice day!" << std::endl;
      return 0;
      break;
    }

  } while (choice != 5);

  return 0;
}
// declaration for the function

void addTDL(std::vector<TDL> &to_do_list) {
  TDL ask;
  std::cout << std::setw(10) << std::string(6, '>') << " Add To-Do-Lists "
            << std::string(6, '<') << std::endl;
  std::cout << std::setw(5) << "Enter description:";
  getline(std::cin, ask.todo_list);
  to_do_list.push_back(ask);
  ask.isDone = true;
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
  TDL show_status;
  std::cout << std::setw(10) << std::string(6, '>') << " Your To-Do-List "
            << std::string(6, '<') << std::endl;
  if (to_do_list.empty()) {
    std::cout << "There is nothing to show now!" << std::endl;

  } else {
    std::cout << "Note: [✓]: Done / [✘]: Haven't Done \n";
    for (size_t i = 0; i < to_do_list.size(); i++) {
      std::string show_tdl_status = to_do_list[i].isDone ? "✓" : "✘";
      std::cout << (i + 1) << ". [" << show_tdl_status << "] "
                << to_do_list[i].todo_list << std::endl;
    }
  }
}
void markAsDone(std::vector<TDL> &to_do_list) {
  std::cout << std::setw(10) << std::string(6, '>') << " Mark as Done "
            << std::string(6, '<') << std::endl;
  if (to_do_list.empty()) {
    std::cout << "There is nothing to mark!" << std::endl;
    return;
  }
  for (size_t i = 0; i < to_do_list.size(); i++) {
    std::string check_box = to_do_list[i].isDone ? "✓" : "✘";
    std::cout << (i + 1) << ". [" << check_box << "] "
              << to_do_list[i].todo_list << std::endl;
  }
  int mark_choice;
  std::cout << "Enter description(number) to mark:";
  if (!(std::cin >> mark_choice)) {
    std::cout << "Invalid! Must type in a number!" << std::endl;
    return;
  }
  if (mark_choice > 0 && static_cast<int>(to_do_list.size())) {
    to_do_list[mark_choice - 1].isDone = true;
    //   std::string mark_as_done = to_do_list[tar_mark_choice].todo_list;
    //  to_do_list.erase(to_do_list.begin() + tar_mark_choice);
    std::cout << mark_choice << " has been mark as done" << std::endl;

  } else {
    std::cout << mark_choice << " does not exit" << std::endl;
    return;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
// declaration for the save file to memory
//
void saveToFile(std::vector<TDL> &to_do_list) {

  std::ofstream out_file("todo.txt"); // this will create/ open file
  if (out_file.is_open()) {
    for (const auto &task : to_do_list) {
      out_file << task.isDone << "|" << task.todo_list << std::endl;
    }
  }
}
void loadFromFile(std::vector<TDL> &to_do_list) { 

std::ifstream in_file("todo.txt");
    if (!in_file.is_open()) return; // No file? No problem, start empty.

    std::string line;
    while (std::getline(in_file, line)) {
        if (line.length() < 3) continue; // Skip empty/broken lines

        TDL temp;
        temp.isDone = (line[0] == '1');      // First char is the status
        temp.todo_list = line.substr(2);     // Everything after the '|'
        to_do_list.push_back(temp);
    }
    in_file.close();
}  


