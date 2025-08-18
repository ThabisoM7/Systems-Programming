#include <iostream>

int main() {
	int size;

	std::cout << "Enter the size of the array: ";
	std::cin >> size;

	//Dynamically allocate an array of integers
	int* arr = new int[size];

	//fill the array
	for (int i = 0; i < size; ++i) {
		arr[i] = (i + 1) * 10;
	}
	//Display the array
	std::cout << "Array contents: ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";

	}
	std::cout << std::endl;

	// Free the allocated memory
	delete[] arr;

	return 0;

}