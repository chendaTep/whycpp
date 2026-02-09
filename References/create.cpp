#include <iostream>



int main () { 
  std :: string food = "Pizza" ; 
  std :: string &meal= food ; 
 std :: cout << food << std :: endl; 
 // so when we change one of those value it will effect both of them 
 // meal = "Pasta";
 std :: cout << food << std :: endl;

// we can also use the & this operator to get an memory address too  
 std :: cout << &food << std :: endl; 



return 0 ; }
