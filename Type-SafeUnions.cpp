#include <iostream>
#include <variant>

//Define a variant that can hold multiple types
using Data = std::variant<int, float, std::string>;

void printData(const Data& d) {

	std::visit([](auto&& value) {
		std::cout << "Value: " value << std::endl;
		}
}