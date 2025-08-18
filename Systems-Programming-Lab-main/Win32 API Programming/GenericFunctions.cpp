#include <iostream>

// Define a function template that works with any type

template <typename T>
T maxValue(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	std::cout << "Max (int): " << maxValue(10, 20) << std::endl;
	std::cout << "Max (double):" << maxValue(5.5, 2.3) << std::endl;

	return 0;

	//Function templates
	//Type generic logic
	//Reusability and type safety
}