#include <iostream>



int main ()  { 

  int a {10} ; 
  int* ptrA = &a; 
  int b {20} ; 
  int* ptrB = &b ; 
  int c {30} ; 
  int* ptrC = &c ; 

  std :: cout << "a vlaue: " << " " << a << "," << " " << "a address: " <<" " <<  ptrA <<"..."<< std :: endl; 
  std :: cout << "b value: " << " " << b << "," << " " << "b address:" << " " << ptrB <<"..."<< std :: endl ; 
  std :: cout << "c value: " << " " << c << "," << " " << "c address: " << " " << ptrC <<"..."<<  std :: endl ; 
  std :: cout << "----------------------After swapping and modifying:-----------------------" << std :: endl ; 
  int temp = *ptrA; 
  *ptrA = *ptrB;
  *ptrB = temp; 
  *ptrC = *ptrC * 2 ; 
  std :: cout << "a:" << " " << temp << std :: endl ; 
  std :: cout << "b:" << " " << *&b<< std :: endl ; 
  std :: cout << "c:" << " " << *ptrC << std :: endl ; 








return 0 ; 
}
