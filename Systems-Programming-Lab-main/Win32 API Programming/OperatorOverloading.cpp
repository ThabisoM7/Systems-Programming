#include<iostream>

class Vector2D {

public:
	float x, y;

	Vector2D(float x, float y) : x(x), y(y) {}

	//Overload the operator
	Vector2D operator_(const Vector2D& other) const {
		return Vector2D(x + other.x, y + other.y);
	}

	//Output formatting
	void print() const {
		std::cout << "(" << x << ", " << y << ")" << std::endl;

	}
};

int main() {
	Vector2D a(2.0f, 3.0f);
	Vector2D b(1.5f, 4.5f);

	Vector2D result = a + b;
	result.print();

	return 0;
}