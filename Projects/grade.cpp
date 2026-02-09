#include <iostream>
struct Grade {
  std ::string subject;
  double score;
};
void displayGrade(double grade[], int size, std ::string name) {

  std ::cout << "===== All Grades =====" << std ::endl;
  // for (int sub = 0 ; sub < size ; sub ++  ) { } ;
  for (int i = 0; i < size; i++) {
    std ::cout << "Grade's " << " " << ": " << grade[i] << std ::endl;
  }
}

double calculateAverage(double grade[], int size) {
  double total = 0;
  for (int i = 0; i < size; i++) {
    total += grade[i];
  }
  return total / size;
}

double findHighest(double grade[], int size) {
  double highest = grade[0];
  for (int i = 1; i < size; i++)
    if (grade[i] > highest) {
      highest = grade[i];
    }
  return highest;
}

double findLowest(double grade[], int size) {

  double lowest = grade[0];
  for (int i = 1; i < size; i++)
    if (grade[i] < lowest) {
      lowest = grade[i];
    }
  return lowest;
}

int main() {
  int numGrade;
  std ::cout << "How many grades to enter: " << std ::endl;
  std ::cin >> numGrade;
  while (numGrade <= 0) {

    std ::cout << "PLease enter the valid grade !! " << std ::endl;
    std ::cin >> numGrade;
  }

  double *grades = new double[numGrade];
  std ::cin.ignore();

  for (int i = 0; i < numGrade; i++) {
    std ::cout << "Enter grade" << " " << (i + 1) << ": " << " " << std ::endl;
    std ::cin >> grades[i];
    while (numGrade < 0 || numGrade > 100) {
      std ::cout << "Invalid grade!!" << std ::endl;
      std ::cin >> grades[i];
    }
  }

  // std ::cout << "===== All Grades =====" << std ::endl;

  displayGrade(grades, numGrade);
  double avg = calculateAverage(grades, numGrade);
  std ::cout << "Average:" << avg << std ::endl;
  double high = findHighest(grades, numGrade);
  std ::cout << "Highest:" << high << std ::endl;
  double low = findLowest(grades, numGrade);
  std ::cout << "Lowest:" << low << std ::endl;

  delete[] grades;

  return 0;
}
