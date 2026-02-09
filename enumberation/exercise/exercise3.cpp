#include <iostream>
#include <string>

enum UserRole {
Admin = 1, 
Editor, 
Viewer

};

int main () {
  char role ; 
  UserRole input ; 
  std :: cout << "1.A)dmin\n1. 2.E)ditor\n2. 3.V)iewer\n" ; 
  std :: cout << "Please enter your role : "; std :: cin >> role ; 

switch (role) {
  case 'A' : 
  case 'a': 
    input = Admin ; 
    std :: cout << "You are an admin you will get a full access. "; 
    break; 
  case 'E': 
  case 'e': 
    input = Editor ; 
    std :: cout << "You are an editor you are only allow to edit."; 
    break;
  case 'V': 
  case 'v': 
    input = Viewer; 
    std :: cout << "You are only allow to vien only."; 
    break;
  default:
    std :: cout << "Please enter your role!"; 
    break;
};




return 0 ; 

}
