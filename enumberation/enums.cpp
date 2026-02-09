#include <iostream>
#include <string>

enum Level {
LOW = 1,
MEDIUM,
HIGH 
};  // we can also change the value of the for each or maybe like just one and the rest will be follow 
    // example 

enum LevelTwo {

  low = 1 , 
  meduim,
  high

}; 

int main () { 
 enum Level myVar = MEDIUM; 
 std :: cout << myVar; 

 // enum with the switch statement 
 
enum LevelTwo myVars = meduim; 
switch(myVars){


  case 1 : 
  std :: cout <<"Low level "; 
  break;
  case 2 : 
  std :: cout << "Meduim Level "; 
  break; 
  case 3 : 
  std :: cout << "High Level " ; 
  break; 
}



return 0 ; }
