#include <iostream>
#include <string>

int main() {
  int numTasks;
  std::cout << "How many tasks you want to list? " << std ::endl;
  std ::cout << "Enter how many you want to do : " << std ::endl;
  std ::cin >> numTasks;

  if (numTasks <= 0) {
    std ::cout << "Must have at least one task!!!!" << std ::endl;
    return 0;
  }

  std ::string *tasks = new std ::string[numTasks];

  std ::cin.ignore();

  for (int i = 0; i < numTasks; i++) {
    std ::cout << "Enter task " << i + 1 << " : " << std ::endl;
    getline(std ::cin, tasks[i]);
  }

  std ::cout << "========== Your To-Do List =========" << std ::endl;
  for (int i = 0; i < numTasks; i++) {

    std ::cout << " [ ] " << (i + 1) << ". " << tasks[i] << std ::endl;
  }
  delete[] tasks;
  return 0;
}
