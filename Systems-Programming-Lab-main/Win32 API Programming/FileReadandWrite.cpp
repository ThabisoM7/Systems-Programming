#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string filename = "example.txt";

	//Write to a file
	std::ofstream outfile(filename); //Open for output
	if (outfile.is_open()) {
		outfile << "This is a test. \n";
		outfile << "Written by C++ \n";
		outfile.close();
	}
	else {
		std::cerr << "Failed to open file writing. " << std::endl;
	}
	//Read from the file
	std::ifstream infile(filename); //Open for input
	if (infile.is_open()) {
		std::string line;
		while (std::getline(infile, line)) {
		std::cout << line << std::endl;
		}
		infile.close(); //Close after reading
	}
	else {
	std::cerr << "Failed to open file for reading." << std::endl;
	}
	return 0;
}