#include<iostream>
#include <string>

//Define a struct to a person
struct Person {
	std::string name;
	int age;
};

int main() {

	Person student;

	std::cout << "Enter your name: ";
	std::getline(std::cin, student.name);

	std::cout << "Enter your age: ";
	std::cin >> student.age;

	//Display the structs content
	std::cout << "Student Info - Name: " << student.name << ", Age: " << student.age << std::endl;

	return 0;
}
