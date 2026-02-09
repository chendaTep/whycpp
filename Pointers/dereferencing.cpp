#include <iostream>


int main ()  { 
// so we use this just to get the value of the address like in the example 

  std :: string car = "Mclaren"; 
 
  std :: string* ptr = &car ; 
  std :: cout << ptr << std :: endl ;  
  std :: cout << *ptr; 


return 0 ;

}
