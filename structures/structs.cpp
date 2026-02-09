#include <iostream> 
#include <string> 


int main () {
  
// so the structure of the structs is in the note.md 
 

  // this is how we create it 
  

 // create a structure called myStructure 
 

    struct{   
    int myNum; 
    std :: string myString ; 

  }myStructure; 
// assign the value to the structs

  myStructure.myNum = 1 ; 
  myStructure.myString = "Chenda"; 

  std :: cout << myStructure.myString<< std :: endl; 
// this is multi structs

  struct {
  
    std :: string model; 
    std :: cout << myStructure.myNum<< std :: endl; 
    std :: string brand; 
    int year; 
  } myCar1 , myCar2 ; // we add another variable by using comma 

  // Put data into the first structs 

   myCar1.model = "Model Y "; 
   myCar1.brand = "Tesla"; 
   myCar1.year = 2017 ; 

   // put data into the second structs

   myCar2.model = "Fortunner"; 
   myCar2.model = "Toyota" ; 
   myCar2.year = 2021; 


   std :: cout << myCar1.model <<" "<< myCar1.brand << " " << myCar1.year<< std :: endl ;  
   std :: cout << myCar2.model << " " << myCar2.brand << " "<< myCar2.year<< std :: endl; 

// this is another way to write this one 

   struct f1 {
    int points ; 
    std :: string team; 
    
   }; 

   f1 




  return 0; 
}
