#include<iostream>
#include <thread>

//A function that will run in a seperate thread
void task(int id) {
	std::cout << "Thread " << id << " is running" << std::endl;
}

int main() {

	std::thread t1(task, 1);
	std::thread t2(task, 2);

	//Wait for both threads to complete
	t1.join();
	t2.join();

	std::cout << "Main thread finished" << std::endl;

	return 0;

	//Thread creation
	//function passing to threads
	//Syncronization with join()
	//Parallel execution
}