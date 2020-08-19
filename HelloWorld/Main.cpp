#include <iostream>
#include "Log.h"

int main() 
{
	
	const char* ptr = "nullptr";

	if (ptr)
	{
		Log(ptr);
	}
	else if (ptr == "Hello")
	{
		Log("Ptr is Hello!");
	}
	

	std::cin.get();
}