#include <iostream>
#include <stdexcept>

//Define a custom exception class
class InvalidOperation : public std::runtime_error {
public:
	explicit InvalidOperation(const std::string& message)
		: std::runtime_error(message) {}

};

int divide(int a, int b) {
	if (b == 0) {
		throw InvalidOperation("Division by zero is not allowed.");
	}
	return a / b;
}

int main() {

	try {
		std::cout << divide(10, 2) << std::endl;
		std::cout << divide(5, 0) << std::endl; //Will throw exception
	}
	catch (const InvalidOperation& e) {
		std::cerr << "Caught custom exception: " << e.what() << std::endl;
	}
	return 0;
}
// CONCEPTS DEMONSTRATED:
// INHERITENCE FROM STD::RUNTIME_ERROR
// CUSTOM ERROR CLASSES
// ROBUST EXCEPTION HANDLING


