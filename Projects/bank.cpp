#include <iostream>
#include <string>

class BankAccount {

private:
  std ::string accountHolder;
  std ::string accountNumber;
  double balacne;

public:
  BankAccount(std ::string accHolder, std ::string accNum, double bal) {

    // accountHolder = accHolder;
    // accountNumber = accNum;
    balacne = bal;
  }
  void deposit(double amount) {
    balacne += amount;
    std ::cout << "Deposit $ : " << amount << std ::endl;
    std ::cout << "New balacne $ : " << balacne << std ::endl;
  }
  void withdraw(double amount) {
    if (balacne >= amount) {
      balacne -= amount;
      std ::cout << "Withdraw $ : " << amount << std ::endl;
      std ::cout << "New balacne $ : " << balacne << std ::endl;

    } else if (balacne < amount) {
      std ::cout << "Sorry you don't have enough balacne to withdraw !!"
                 << std ::endl;
      std ::cout << "Current balacne $ : " << balacne << std ::endl;
    }
  }
  double getBalance() { return balacne; }
  void displayInfo() {
    std ::cout << "------- Final account information ------- " << std ::endl;
    std ::cout << "Acount Holder :" << accountHolder << std ::endl;
    std ::cout << "Account Number : " << accountNumber << std ::endl;
    std ::cout << "Balance : " << balacne << std ::endl;
    std ::cout << "======================================" << std ::endl;
  }
};

int main() {
  std ::string name;
  std ::string number;
  double money;
  std ::cout << "Please Enter accout info:" << std ::endl;
  std ::cout << "Enter account name :" << std ::endl;
  getline(std ::cin, name);
  std ::cout << "Enter acocunt number : " << std ::endl;
  std ::cin >> number;
  BankAccount myAccount(name, number, 51.98);

  myAccount.displayInfo();
  double put;
  std ::cout << "How much do you want to deposit?" << std ::endl;
  std ::cin >> put;
  myAccount.deposit(put);
  double take;
  std ::cout << "How much do you want to withdraw?" << std ::endl;
  std ::cin >> take;
  std ::cout << std ::endl;
  myAccount.withdraw(take);
  std ::cout << std ::endl;
  std ::cout << "How much do you want to withdraw?" << std ::endl;
  std ::cin >> take;
  myAccount.withdraw(take);
  std ::cout << std ::endl;
  myAccount.displayInfo();

  return 0;
}
