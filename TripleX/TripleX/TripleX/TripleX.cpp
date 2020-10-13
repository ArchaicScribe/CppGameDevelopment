//Prepocessor statements
//Following Unreal Engine 4's UpperCamelCase naming convention. 
//cout CharacterOutput, cin CharacterInput
#include <iostream>
#include "TripleX.h"

int main()
{
	//Printed out statements
	std::cout << "A small child with great force powers is near you. You can sense it";
	std::cout << std::endl;
	std::cout << "Enter the correct code to continue...";


	//Declare 3 number code
	const int CodeA = 3;
	const int CodeB = 3;
	const int CodeC = 3;


	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA + CodeB + CodeC; 
	
	//Print sum and product to the terminal 
	std::cout << std::endl;
	std::cout << "There are 3 numbers in the code" << std::endl;
	std::cout << "The code adds up to: " << CodeSum << std::endl;
	std::cout << "The code multiplied equals: " << CodeProduct << std::endl;

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
	{
		std::cout << "You win! Congrats!";
	}
	else {
		std::cout << "You lose!";
	}
	

	return 0;
} 