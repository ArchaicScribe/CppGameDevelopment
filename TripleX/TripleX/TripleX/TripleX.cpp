//Prepocessor statements
//Following Unreal Engine 4's UpperCamelCase naming convention. 
//cout CharacterOutput, cin CharacterInput
#include <iostream>
#include "TripleX.h"

int main()
{
	//Printed out statements
	std::cout << "A small child with great force powers is near you. You can sense it....\n";
	std::cout << std::endl;
	std::cout << "Enter the correct code to continue...\n\n";


	//Declare 3 number code
	const int CodeA = 3;
	const int CodeB = 3;
	const int CodeC = 3;


	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA + CodeB + CodeC; 
	
	//Print sum and product to the terminal 
	std::cout << std::endl;
	std::cout << "There are 3 numbers in the code\n";
	std::cout << "The code adds up to: " << CodeSum << "\n";
	std::cout << "The code multiplied equals: " << CodeProduct << "\n"; 

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;
	
	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	//Check to see if player's guess is correct!
	if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
	{
		std::cout << "You may enter the room, where the powerful being is sitting there. Looking up at you.";
	}
	else {
		std::cout << "You lmay not enter the hut!";
	}
	

	return 0;
} 