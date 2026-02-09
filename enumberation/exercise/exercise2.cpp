#include <iostream>


enum MenuOption {


  StartGame = 1,
  LoadGame, 
  Settings, 
  Exit 
}; 

int main () { 

  int number ;
 MenuOption Option ; 
 std  :: cout << "1.Start Game " << std :: endl; 
 std :: cout << "2.Load Game " << std :: endl; 
 std :: cout << "3.Settings " << std :: endl; 
 std :: cout << "4.Exit" << std :: endl ; 

 std :: cout <<"Enter the Option : "<< std :: endl ; std :: cin >> number; 
 
 Option = static_cast <MenuOption>(number) ; 

 switch (Option) {
   case 1 : 
     std :: cout << "Please choose the level:"; 
     break; 
   case 2 : 
     std :: cout << "Game loading....." ; 
     break; 
   case 3 : 
     std :: cout << "PLease choose the specific setting option : " ; 
     break; 
   case 4 : 
     std :: cout << "Thanks for playing the game. See you later. "; 
     break; 
   default:
     std :: cout << "Warning you typing soemething nonsence. Please enter a proper choice! "; 
     break;
 }; 














return 0 ; 
}
