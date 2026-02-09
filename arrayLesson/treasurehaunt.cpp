#include <iostream>
#include <string>



int main () {

int treasures [5][5] = {
                        
                    {0,0,0,0,0},
                    {1,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,1,0,0},
                    {0,1,0,0,0}


}; 

int looking = 0 ; 
int numOfFind = 0; 

int finds; 
while (finds < 3 ) { 
 int row , column;

   std :: cout << "Selecting a place to dig " << std :: endl ;

 std :: cout << "Please choose which row to dig :" << std :: endl ; std :: cin >> row ;

 std :: cout << "Selecting a place to dig " << std :: endl ;
 std :: cout << "Please choose which column to dig : " << std :: endl ; std :: cin >> column; 

if (treasures[row][column]) {
  treasures[row][column]= 0 ; 

  finds++ ;
  std ::cout << "Found" << (3-finds)<< "more to go" << std :: endl; // std :: endl ; 


 } else {
 
   std :: cout << "Wrong place maybe somewhere else " << std :: endl ; // << std :: endl; 

 }
numOfFind++ ; 
std :: cout << "You FOUND it all!" << std :: endl ; 
std:: cout <<  "You found it YOU took only" << numOfFind << "turns to do it." << std :: endl; 



}




return 0;   }
