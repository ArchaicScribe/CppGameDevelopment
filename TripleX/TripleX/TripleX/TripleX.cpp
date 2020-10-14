//Prepocessor statements
//Following Unreal Engine 4's UpperCamelCase naming convention. 
//cout CharacterOutput, cin CharacterInput
#include <iostream>
#include "TripleX.h"





void PrintIntroduction()
{
	
	std::cout << "\n\nWelcome, to a galaxy far, far away... Where you are part of an ancient order, \ncalled Jedi...\n";
	 /*           "  ._                                 "
							  ",-'_ `-.                              "
							  "::".^-. `.                            "
							  ||<    >. \                           
							  |: _, _| \ \                          
							  : .'| '|  ;\`.                        
							  _\ .`  '  | \ \                       
							.' `\ *-'   ;  . \                      
						   '\ `. `.    /\   . \                     
						 _/  `. \  \  :  `.  `.;                    
					   _/ \  \ `-._  /|  `  ._/                     
					  / `. `. `.   /  :    ) \                      
					  `;._.  \  _.'/   \ .' .';                     
					  /     .'`._.* /    .-' (                      
					.'`._  /    ; .' .-'     ;                      
					; `._.:     |(    ._   _.'|                     
					`._   ;     ; `.-'        |                     
					 |   / .-'./ .'  \ .     /:                     
					 |  +.'  \ `-.   .\ *--*' ;\                    
					 ;.' `. \ `.    /` `.    /  .                   
					/.L-'\_: L__..-*     \   ".  \                  
				   :/ / .' `' ;   `-.     `.   \  .                 
				   / /_/     /              \   ;  \                
			  |  _/ /       /          \     `./    .               
			`   .  ;       /    .'      `-.   ;      \              
		   --  /  /  --   ,    /           `"' \      .             
		  .   .  '       /   .'                 `.     \            
			 /  /    `  /   /                  |  `-.   .           
		--  .  '   \   /                         `.  `-._\          
	   .   /  /       : `*.                    :   `.    `-.        
		  .  '    `   |    \                    \    `-._   `-._    
	 --  /  /   \     :     ;                    \              |   
   .    .  '           ;                          `.  \      :  ;   
	   /  /   `       : \    \                      `. `._  /  /    
  --  .  '  \         |  `.   `.                      `-. `'  /\    
	 /  .             ;         `-.              \       `-..'  ;   
 `  .  '   `          |__                     |   `.         `-._.  
_  :  /  \     [bug]    ;`-.                  :     `-.           ; 
	`"  `               |   `.                 \       `*-.__.-*"' \
' /  . \                ;_.  :`-._              `._                /
					   /   `  . ; `"*-._                       _.-` 
					 .'"'    _;  `-.__                     _.-`     
					 `-.__.-"         `""---...___...--**"' |       
												  `.____..--'*/


}

bool bPlayGame()
{
	PrintIntroduction();

	//Printed out statements
	std::cout << "\nA small child with great force powers is near you. You can sense it....\n";
	std::cout << std::endl;
	std::cout << "Enter the correct code to continue...\n\n";


	//Declare 3 number code
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;


	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA + CodeB + CodeC;

	//Print sum and product to the terminal 
	std::cout << std::endl;
	std::cout << "There are 3 numbers in the code";
	std::cout << "\nThe code adds up to: " << CodeSum;
	std::cout << "\nThe code multiplied equals: " << CodeProduct << std::endl;

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	//Check to see if player's guess is correct!
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "\nYou may enter the room, where the powerful being is sitting there. Looking up at you.";
		return true;
	}
	else {
		std::cout << "\nYou may not enter the hut!";
		return false;
	}
}


int main()
{
	while (true) 
	{
		bool LevelComplete = bPlayGame;
		bPlayGame();
		std::cin.clear();//Clears any errors
		std::cin.ignore();//Discards the buffer
	}

	return 0;
} 