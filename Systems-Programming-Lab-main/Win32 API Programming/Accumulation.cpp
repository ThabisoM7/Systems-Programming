#include <iostream>

int main()
{
	int n;

	//Ask user for how many numbers to sum
	std::cout << "Enter a number: ";
	std::cin >> n;

	int sum = 0;

	// Loop from 1 to n and accumulate the sum
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
std::cout << "The sum of numbers from 1 to " << n << " is" << sum << std::endl;
return 0;
}