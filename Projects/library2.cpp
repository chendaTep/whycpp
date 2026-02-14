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
  void setTitle(std ::string t) { title = t; }
  void setAuthor(std ::string a) { author = a; }
  void setPages(int p) { pages = p; }
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
    std ::string title, author;
    int pages;
    std ::cout << "Enter book:" << (i + 1) << " " << "title:" << std ::endl;
    getline(std ::cin, title);
    books[i]->setTitle(title);
    std ::cout << "Enter author:" << std ::endl;
    getline(std ::cin, author);
    books[i]->setAuthor(author);
    std ::cout << "Enter pages:" << std ::endl;
    std ::cin >> pages;
    books[i]->setPages(pages);
    std ::cin.ignore();
    std ::cout << std ::endl;
  }
  std ::cout << "\n===== Library Books =====\n" << std ::endl;
  for (int i = 0; i < numBook; i++) {
    std ::cout << (i + 1) << ". " << std ::endl;
    books[i]->displayInfo();
    std ::cout << std ::endl;
  }
  std ::cout << "\nWhich book to borrow (enter number 1-" << numBook
             << "): " << std ::endl;
  int choice;
  std ::cin >> choice;
  books[choice - 1]->borrowBook();
  books[choice - 1]->returnBook();
  std ::cout << "\nTrying to borrowed book again \n" << std ::endl;
  books[choice - 1]->returnBook();
  std ::cout << "====== Library Books ======" << std ::endl;
  for (int i = 0; i < numBook; i++) {
    std ::cout << (i + 1) << std ::endl;
    books[i]->displayInfo();
    std ::cout << std ::endl;
  }
  for (int i = 0; i < numBook; i++) {
    delete books[i];
  }

  delete[] books;
  return 0;
}
