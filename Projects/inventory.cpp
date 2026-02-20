#include <chrono>
#include <iostream>
#include <string>
#include <thread>

class Inventory {

  void loading(std ::string message) {
    std ::string frame[] = {".", "..", "..."};
    for (int i = 0; i < 6, i++) {
      std ::cout << "\r" << message << " " << frame[i * 3] << std ::flush;
      std ::this_thread::sleep_for(std ::chrono ::milliseconds(300))
    }
  }
};

int main() {}
