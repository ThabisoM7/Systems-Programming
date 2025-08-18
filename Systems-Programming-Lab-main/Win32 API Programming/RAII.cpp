#include <iostream>
#include <fstream>

//concepts demonstrated
//RAII (RESOURCE ACQUISITION IS INITIALIZATION
//CONSTRUCTORS/DESTRUCTORS
//EXCEPTION HANDLING
//FILE MANAGEMENT WITH AUTOMATIC CLEAN UP

//A wrapper class that opens a file and closes it automaticallu
class FileLogger {

private:
	std::ofstream file;

public:
	FileLogger(const std::string& filename) {
		file.open(filename);
			if (!file) {
				throw std::runtime_error("Unable to open file");
			}

	}
	void log(const std::string& message) {
		file << message << std::endl;
	}
	~FileLogger() {
	
		if (file.is_open()) {
			file.close(); //Automatically closes the file
		}
	}
};

int main() {

	try {
		FileLogger logger("log.txt");
		logger.log("This is a log message");
		logger.log("Resource management done right");

		}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}