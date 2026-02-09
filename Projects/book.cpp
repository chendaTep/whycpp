#include <iostream>
#include <string>

struct Book {
  std ::string title;
  std ::string author;
  int pages;
  int rating;
};

void displayBooks(Book books[], int size) {
  std ::cout << "======== Your Book Collection ========" << std ::endl;
  for (int i = 0; i < size; i++) {
    std::cout << (i + 1) << "." << " " << books[i].title << " - "
              << books[i].pages << "pages" << "(" << books[i].rating << " "
              << "stars ) " << std ::endl;
  }
}

int findLongestBook(Book books[], int size) {
  int longestBook = 0;
  for (int i = 1; i < size; i++) {
    if (books[i].pages > books[longestBook].pages) {
      longestBook = i;
    }
  }

  return longestBook;
}

int findShortestBook(Book books[], int size) {
  int shortestBook = 0;
  for (int i = 1; i < size; i++) {
    if (books[i].pages < books[shortestBook].pages) {
      shortestBook = i;
    }
  }

  return shortestBook;
}

double averageCalculation(Book books[], int size) {
  double total = 0;
  for (int i = 0; i < size; i++) {
    total += books[i].rating;
  }
  return total / size;
}

int countFiveStars(Book books[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (books[i].rating == 5)
      count++;
  }

  return count;
}

int main() {
  int numBook;
  std ::cout << " How many books to add: " << std ::endl;
  std ::cin >> numBook;

  while (numBook <= 0) {
    std ::cout << "The amount of books must be positive and greater than 0 !! "
               << std ::endl;
    std ::cout << " How many books to add:" << std ::endl;
    std ::cin >> numBook;
  }
  Book *books = new Book[numBook];
  std ::cin.ignore();

  for (int i = 0; i < numBook; i++) {
    std ::cout << "Enter " << (i + 1) << " book title:" << std ::endl;
    getline(std ::cin, books[i].title);
    std ::cout << "Enter author: " << std ::endl;
    getline(std ::cin, books[i].author);
    std ::cout << "Enter pages: " << std ::endl;
    std ::cin >> books[i].pages;
    while (books[i].pages <= 0) {
      std ::cout << "Page number must be positive & != 0 !! " << std ::endl;
      std ::cout << "Enter pages again:" << std ::endl;
      std ::cin >> books[i].pages;
    }
    std ::cout << "Enter rating (1-5): " << std ::endl;
    std ::cin >> books[i].rating;
    while (books[i].rating < 1 || books[i].rating > 5) {
      std ::cout << "The rating should be (1-5) !! " << std ::endl;
      std ::cout << "Enter rating again:" << std ::endl;
      std ::cin >> books[i].rating;
    }
    std ::cin.ignore();
  }

  displayBooks(books, numBook);
  int longestBook = findLongestBook(books, numBook);
  std ::cout << "Longest Book:" << books[longestBook].title << "("
             << books[longestBook].pages << "pages)" << std ::endl;

  double avg = averageCalculation(books, numBook);
  std ::cout << "Average Rating: " << avg << " stars" << std ::endl;
  int count = countFiveStars(books, numBook);
  std ::cout << "Number of 5-star books:  " << count << std ::endl;

  delete[] books;
  return 0;
}
