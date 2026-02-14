#include <iostream>
#include <locale>
#include <string>

class Book {
private:
  std ::string title;
  std ::string author;
  int pages;
  bool isAvialible; // this is ask the like if true =  can borrowed , if false =
                    // cant borrowed

public:
  Book(std ::string t, std ::string a, int p) {

    title = t;
    author = a;
    pages = p;
    isAvialible = true;
  }
  void borrowBook() {
    if (isAvialible) {
      isAvialible = false;
      std ::cout << "You borrowed" << title << std ::endl;

    } else {
      std ::cout << "Sorry, " << title << "is already borrowed " << std ::endl;
    }
  }
  void returnBook() {
    if (isAvialible) {
      isAvialible = true;
      std ::cout << title << "has been returned !" << std ::endl;
    }
  }
  void displayInfo() {
    std ::cout << title << "by" << author << " - " << pages << "pages\n"
               << std ::endl;
    if (isAvialible) {
      std ::cout << "Status: Available ";

    } else {
      std ::cout << "Status: Borrowed " << std ::endl;
    }
  }
  bool checkAvailable() { return isAvialible; }
};

int main() {
  Book getInfo;
  int numBook;
  std ::cout << "How many books you want to add : " << std ::endl;
  std ::cin >> numBook;
  while (numBook <= 0) {
    std ::cout << "Invalid!!! " << std ::endl;
    std ::cout << "Please enter again:" << std ::endl;
    std ::cin >> numBook;
  }

  Book **books = new Book *[numBook];
  std ::cin.ignore();
  for (int i = 0; i < numBook; i++) {
    std ::cout << "Enter book" << (i + 1) << " " << "title:" << getinfo.t;
  }

  return 0;
}
