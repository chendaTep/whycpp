#include <iostream>

int main () { 

int score {50} ; 

std ::cout << score << std :: endl; 
std :: cout << &score << std :: endl ; 

int* ptr {&score} ; 

std :: cout << ptr << std :: endl ; 
std :: cout << *ptr << std :: endl ; 
*ptr = 100 ; 
std :: cout << score ; 










return 0 ; 
}
