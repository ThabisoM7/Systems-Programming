#include <iostream>
#include <memory>

class Resource {
public:
	Resource() {
		std::cout << "Resource acquired" << std::endl;
	}
	Resource() {
		std::cout << "Resource destroyed" << std::endl;
	}
	void greet() {
		std::cout << "Hello from resource!" << std::endl;
	}
};

int main() {
	std::shared_ptr<Resource> ptr1 = std::make_shared<Resource>();
	{
		std::shared_ptr<Resource> ptr2 = ptr1; //Shared ownership
		ptr2->greet();
		std::cout << "Reference cout: " << ptr1.use_count() << std::endl;
	}
	std::cout << "Back to main scope.Reference count : " << ptr1.use_count() << std::endl;
}
