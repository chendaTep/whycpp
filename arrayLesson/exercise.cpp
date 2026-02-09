#include <iostream> 
#include <string> 

// this is the project from w3school 
int main () {
 int ages [10] = {3,12,23,27,34,45,57,68,78,105} ; 
 float avg, sum = 0 ; 
 int i ; 

 
 int lenght = sizeof(ages)/sizeof(ages[0]) ;  

 for (int ages : ages) { 
   sum += ages ; 
 }

  avg = sum / lenght ; 
  std :: cout << "This is the average age of this country : " << avg << std :: endl ; 

  
 // this is the exercise score test that we get from chatgpt 
 

  int score [5] = {45,78,80,97,85} ; 
  float avgscore , sumscore = 0 ; 
   
  int lengthscore = sizeof(score)/ sizeof(score[0]) ; 
  for (int s : score ) { 
   
    sumscore += s; 

  }

  avgscore = sumscore / lengthscore ;
  std :: cout << "the average score in the class is: " << avgscore << std :: endl; 

// another exercise 


  int num [6] = {2,4,6,8,10,12};  

  float numsum = 0 ; 
 
  for (int n : num ) {

    numsum += n ; 

    std :: cout << "this is the total of the number : " << numsum << std ::endl ; 

  }


  // this is w3school exercise find the lowest age
   
   int lowAges [8] = {12,6,23,56,86,34,67,81} ; 
   int lowLength = sizeof(lowAges) / sizeof(lowAges[0]) ;  

   int lowestAges = lowAges[0] ;  

     

  for (int l : lowAges) { 

  if (lowestAges > l){

lowestAges =l;
  }
  
  }

  std :: cout << "This is the lowest age in the category : " << lowestAges << std :: endl; 
 
// another exercise from chatgpt find the biggest num 


  int values [8] = {22,34,66,72,23,12,34,99} ; 
  int lengthValue = sizeof(values) / sizeof (values[0]) ;
  int highestValue = values[0] ; 
  for (int v : values) {

   if (v > highestValue) {
     highestValue = v ; 
   }
  }
 std :: cout << "This is the highestValue in the category : " << highestValue << std :: endl ; 

 
 // this is the exercise for the multi dimansional 
 // print the matrix
  
 int matrix [3][3] = {
  
           {1,2,3},
           {4,5,6},
           {7,8,9}
 }; 
 for (int i = 0; i<3; i++){ 
  for (int j = 0 ; j < 3 ; j++ ){ 
   
      std :: cout << matrix[i][j] <<" "; 
    }
  std :: cout << std :: endl; 
  }

 std :: string athlete [11][2] = {  
                      {"Norris","Piatri"}, 
                      {"Russel","Anotonelli"},
                      {"Versteppen","Tsunoda"}, 
                      {"Leclrec","Hamilton"},
                      {"Sargent","Sainz"},
                      {"Hadjar","Lawson"},
                      {"Alonso","Stroll"},
                      {"Ocon","Bearman"},
                      {"Hulkenberg","Gabriel"},
                      {"Gasly","Colapinto"},
                      {"Bottas","Perez"}
                    
                    
          }; 
for (int i =0; i<11; i++){
  for (int j = 0; j<2; j++){
    std ::cout << athlete[i][j]<< " "; }
  std :: cout << std :: endl; }

 // this is the w3school exercise that make the battle ship game 
  
int ships [4][4] = { 

                 {0,1,1,0},   // ship =1  
                 {0,0,0,0},
                 {1,0,0,0},
                 {0,0,1,1}


}; 

// keep the track of how many hit and turn each player have 

 int turn = 0 ; 
 int numOfTurn = 0; 

 // this is while loop so allow them to hit until the ship all gone 

int hits; 
  while (hits < 5) { 
int row, column ; 

std :: cout << "Selecting the cordinates:"<< std :: endl ;

// this ask for the row

std :: cout << "Please select the row" << std :: endl; std :: cin >> row ; 

// this ask for the column 

std :: cout << :"Selecting the cordinates" << std :: endl ; 

std :: cout << "Please select the column" << std :: endl; 

 std :: cin >> column ; 
 // check is there a ship 
  if (ships [row][column]) { 
// so this is like when there is a ship it will be removed 
 
    ships[row][column]=0 ;
// increase hit counter 
    hits ++ ; 
// tell the player they hits the ship and tell how many are left 



    std :: cout << "Hit! " << (4-hits) << "left."<< std ::endl<< std ::endl;  

      

  } else 
  {
    std :: cout << "Miss it " << std :: endl << std :: endl; 
  }
   // this print how many hit they have left 
   numOfTurn++ ; 

  }
std :: cout << "YOU are the WINNER!!!" << std :: endl; 
std :: cout << "You won in" << numOfTurn<< "turns" << std :: endl ; 













  return 0 ; 
}
