// to adjust the memory we have to do this like add the key like new for creating it and delete for the delete  


#include <iostream> 
#include <string> 
int main () { 

  // this is how we create a adjustable data 
int* ptr = new int ; 
std :: cout << "Enter a number : " << std :: endl; std :: cin >> *ptr;  
std :: cout << *ptr << std :: endl ; 

 // this is we delete it 

delete ptr ; 

// so we can also use the this with the array too 

int numGuests ; 
std :: cout << "How many Guests : " << std :: endl ; 
std :: cin >> numGuests; 

if (numGuests <= 0 ) { 
  std :: cout << "Number of the guest must be at least 1. " ; 

return 0 ; 

}
// create a memory of space for the guest with an array 

// ignore the left over new line characters after reading numGuests 
 
std ::cin.ignore() ; 
// enter guests name 

for (int i = 0 ; i < numGuests; i++ ) { 

  std :: cout << "Enter name of the guests " << (i + 1 ) << ":  " ; 
  std ::  getline(std :: cin , guests[i]) ;  // we use getline for read all the name if there also a space like Tep Chenda 
                      
}
 // show all the guests 
 
std :: cout << "----------------------Guests check in----------------------- " ; 
for (int i = 0 ; i < numGuests;  i++  ) { 

  std :: cout << guests[i]<< std :: endl ; 
  } 
delete[] guests ; 

return 0 ; 
}
