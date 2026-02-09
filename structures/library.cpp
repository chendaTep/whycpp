#include <iostream> 
#include <string> 


int main () {
struct {
  std :: string author , title ; 
  int pages ; 

} library;
std :: cout << "Enter author name : " ; std :: cin >> library.author; 
std :: cout << "Enter the title of the book : " ; std :: cin >> library.title ; 
std :: cout << "Enter the page of the book : "; std :: cin >> library.pages ; 

std :: cout << "The author name is  " << " "<< library.author<< " "<< "and the title of the book is " << library.title<< " " << "and the page is "<< library.pages ; 





  return 0; 
}
