#include <iostream>

int main() {


	int age;

	std::cout << "Enter your age: ";
	std::cin >> age;

	//Use conditionals statements to evaluate input
	if (age > 18) {

		std::cout << "You are an adult" << std::endl;
		}
	else if (age >= 13) {
		std::cout << "You are a teenager," << std::endl;
	}
	else {
		std::cout << "Your are a child. " << std::endl;
	}
	return 0;
}