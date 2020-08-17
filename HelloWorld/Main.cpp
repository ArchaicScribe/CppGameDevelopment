#include <iostream>

void Log(const char* message);

int main() {

	unsigned int variable = 8; //-2b -> 2b

	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	std::cin.get();

	float z = 5.5f;
	std::cout << z << std::endl;

	double x = 5.2;
	std::cout << x << std::endl;

	bool yesOrNo = true;
	std::cout << sizeof(yesOrNo) << std::endl;
}