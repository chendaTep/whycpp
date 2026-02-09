#include <iostream> 
#include <string> 
 
int main () {
  // this is the multi array or dimansional  
  std :: string letters [2][4] = {
          {"A","B","C","D"},
          {"E","F","G","H"}

          }; 
 
   std :: cout << letters[1][1] << std :: endl;
    
  
// another example of the loop througt the array  

  std :: string names [2][4] = {
                      {"Chenda","Tepy","Dad","Mom"},
                      {"Chou","Pisey","Moni","Kimly"}

  }; 

  for (int i =0; i < 2 ; i++) {
    for (int j =0; j < 4 ; j++) {
      std :: cout << names [i][j]<< std :: endl ;  
    } 
  } 

  // this is the three dimansional 
  std:: string cars [2][2][2] = {  { 
                   {"Mclaren","Redbull"}, 
                   {"Ferrari","Mercedes"} 
                }, 
                   {
                     {"Haas","Aston"},
                       {"Alpine","William"}

                   }
       }; 
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j< 2; j++ ) { 
    for (int k = 0; k < 2; k ++) { 
       std :: cout << cars[i][j][k] << std :: endl ; 
      }
    }
  } 





  return 0 ; 
}






