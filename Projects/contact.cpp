#include <iostream>
#include <string>

struct Contact {
  std ::string name;
  std ::string phone;
};

int main() {
  int numContact;
  std ::cout << "How many contacts to add : " << std ::endl;
  std ::cin >> numContact;

  while (numContact <= 0) {
    std::cout << "Please enter at least one contact!!" << std ::endl;
    std ::cin >> numContact;
  }
  Contact *contacts = new Contact[numContact];

  std ::cin.ignore();

  for (int i = 0; i < numContact; i++) {

    std ::cout << "Please enter " << (i + 1) << " " << "contact's info "
               << " : " << std ::endl;
    getline(std ::cin, contacts[i].name);

    std ::cout << "Please enter " << contacts[i].name
               << "'s phone number : " << std ::endl;
    getline(std ::cin, contacts[i].phone);
  }

  std::cout << "====== Contact Book ======" << std ::endl;
  for (int i = 0; i < numContact; i++) {

    std ::cout << (i + 1) << ". " << contacts[i].name << " | "
               << " Phone : " << contacts[i].phone << std ::endl;
  }
  delete[] contacts;
  return 0;
}
