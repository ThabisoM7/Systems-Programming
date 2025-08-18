#include <iostream>
#include <vector>

int main() {
	//Create a dynamic array (vector) to hold intgers
	std::vector<int> numbers;

	//Populate the vector with user input
	int input;
	std::cout << "Enter 5 numbers: " << std::endl;

	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		numbers.push_back(input); //Append to the vector
	}
	// Calculate the average of the elements
	int sum = 0;
	for (int num : numbers) {
		sum += num;
	}
	float average = static_cast<float>(sum) / numbers.size();

	std::cout << "Average: " << average << std::endl;

	return 0;
}





