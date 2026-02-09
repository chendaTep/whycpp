#include <iostream>
#include <limits>
#include <string>

struct Student {
  std ::string name;
  int score;
  char grade;
};

char calculateGrade(int score) {

  if (score >= 90) {
    return 'A';

  } else if (score >= 80) {
    return 'B';
  } else if (score >= 70) {
    return 'C';

  } else if (score >= 60) {
    return 'D';

  } else if (score >= 50) {
    return 'E';

  } else {
    return 'F';
  }
}

int main() {

  int total;
  std ::cout << "How many student : " << std ::endl;
  std ::cin >> total;

  if (total <= 0) {
    std ::cout << "Must enter at least one student!!!";
    return 0;
  }

  Student *all = new Student[total];

  std ::cin.ignore();
  for (int i = 0; i < total; i++) {

    std ::cout << "Enter the name : " << (i + 1) << ": " << std ::endl;
    std ::getline(std ::cin, all[i].name);

    // ask for the score
    std ::cout << "Enter your score : " << all[i].name << std ::endl;

    std ::cin >> all[i].score;
    // check for the valid score

    while (all[i].score < 0 || all[i].score > 100) {
      std ::cout << "Invalid score please enter from (0-100)!!" << std ::endl;
      std ::cin >> all[i].score;
    }

    all[i].grade = calculateGrade(all[i].score);

    std ::cin.ignore();
  }

  std ::cout << "----------Student result------------" << std ::endl;
  for (int i = 0; i < total; i++) {
    std ::cout << all[i].name << " : " << all[i].score << ": " << all[i].grade
               << std ::endl;
  }
  delete[] all;
  return 0;
}
