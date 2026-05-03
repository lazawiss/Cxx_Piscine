#include <iostream>

class Test {

	int x, y;
public:
	Test(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}

	Test& setX(int a) {
		x = a;
		return *this;
	}

	Test& setY(int b) {
		y = b;
		return *this;
	}

	void	print() {
		std::cout << "x = " << x << " y = " << y << std::endl;
	}
};

int main( void ) {
	Test obj;
	obj.setX(10).setY(20).print();
	return 0;
}