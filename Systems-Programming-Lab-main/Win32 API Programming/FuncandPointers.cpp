#include <iostream>

int add(int x, int y) {
	return x + y;
}

// A Function that modifies a value using a pointer

void doubleValue(int* ptr) {
	*ptr = *ptr * 2; //Dereference and double the value
}

int main() {
	//Demonstrate function call
	int result = add(10, 5);
	std::cout << "Before doubling: " << result << std::endl;

	//Demonstrate pointer manipulation
	int num = 7;
	std::cout << "Before doubling: " << num << std::endl;

	//Pass address of 'num' to the function
	doubleValue(&num);

	std::cout << "After doubling: " << num << std::endl;

	return 0;
}