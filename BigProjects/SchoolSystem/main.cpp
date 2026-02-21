#include "person.h"

int main() {
  Person ob;

  ob.askName();
  ob.askAge();
  ob.askId();
  ob.loading("Saving info");
  ob.displayInfo();

  return 0;
}
