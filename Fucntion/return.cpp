#include <iostream>
#include <string>

int returnNum(int x) {
  return x - 5;
} // this is the return type of the value like  it also can be the string int
  // and more
int dontReturn(int x, int y) {
  return x + y;
} // this multi return value of parameter and we can also store the value of
  // that too

int doubleGame(int num) { return num * 2; }
int main() {

  std ::cout << returnNum(19) << std ::endl;
  std ::cout << dontReturn(7, 4) << std ::endl;
  int z = dontReturn(8, 12);
  std ::cout << z << std ::endl;

  for (int i = 1; i <= 5; i++) {

    std ::cout << "Double of " << i << doubleGame(i) << std ::endl;
  }

  return 0;
}
