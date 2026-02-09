#include <iostream> 
#include <string>


struct Movie {

  std :: string name ; 
  int rating ; 
  
};

int main () {
   
  int numMovie ; 

  std :: cout << "How many movie do you want to rate? (Must type in a number ) : " << std :: endl ; 
  std :: cin >> numMovie; 
  
 if(numMovie<=  0 ) { 
   std :: cout << "Must rate at least one moive !!! " ; 
 return 0 ; }

 // creating an array 
 
  Movie* moives = new Movie[numMovie] ; 

 std :: cin.ignore() ; 
 
 for (int i  = 0 ; i < numMovie; i++ ) { 

   std :: cout << "Please list down the moives name : " << (i + 1 ) << ": " << std :: endl ;

   getline(std :: cin , moives[i].name) ;

   std :: cout << "-------Enter a rating from (1-5)---------" << std :: endl ; 
   std :: cin >> moives[i].rating ; 

while (moives[i].rating < 1 || moives[i].rating > 5 ) {
  std :: cout << "Invalid rating !! " << std :: endl; 
  std :: cin >> moives[i].rating; 
  
}
std :: cin.ignore() ; 
 }


// std :: cout << "---------Enter a rating from (1-5): ---------- " << std :: endl; 

// std :: cin >> myStructure.rating; 
//switch (rating ) {
  //case 1 : 
    //std :: cout << "This is not a good moive." << std :: endl ; 
   // break; 
 // case 2 : 
  //  std :: cout << "This is a ok ok moive but not too good . " << std :: endl ; 
    //break ; 
  //case 3 : 
   // std :: cout << "This is like a good moive. " << std :: endl ; 
    //break; 
  //case 4 : 
    //std :: cout << "This is a pretty good moive. " << std :: endl ; 
    //break; 
//case 5 : 
  //  std :: cout << "This is the best moive." << std :: endl ; 
   ///default:
    //d :: cout << "Please enter a Valid number !!" << std :: endl ; 
    //return 0 ; 
     //break;
 //}  

std :: cout << "------------This is the lists that you ratad for the moives-------------" << std :: endl ; 
for (int  i = 0 ; i < numMovie; i++ ) {
  std :: cout << moives[i].rating << ": " << moives[i].rating << "stars\n" ; 
}

// std :: cout << numMovie[i] << std :: endl ; 

delete[] moives; 

return 0 ; 
}
