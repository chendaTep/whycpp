#include <iostream> 
#include <string> 



int main () {

struct {
int age ; 
std :: string name ; 
char grade ; 

} classRoom; 
std :: cout << "Please enter your nanme : " << std :: endl ; std :: cin >> classRoom.name; 
std :: cout << "Please enter your age : " << std :: endl ; std :: cin >> classRoom.age; 
std :: cout << "Please enter your grade : " << std :: endl ; std :: cin >> classRoom.grade; 

std :: cout << "Your name is " << classRoom.name << "and your are " << classRoom.age << "your grade is " << classRoom.grade; 




  return 0; 
}
