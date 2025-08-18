#include <iostream>
#include <vector>
#include <algorithm>

//A customer functor (function object)

struct isEven {
	bool operator()(int x) const {
		return x % 2 == 0;
	}
};

int main() {

	std::vector<int>number = { 1, 2 ,3, 4, 5, 6 };

	//Use lambda to print all numbers
	std::cout << "All numbers: ";
	std::for_each(numbers.begin()), numbers.end(). [](int x) {
		std::cout << x << " ";
		});
	std::cout << std::endl;

	//Count how many even numbers using this functor
	int evens = std::count_if(numbers.begin(), numbers.end(), isEven());

	std::cout << "Even numbers count: " << evens << std::endl;
	return 0;
}