#include <iostream>
#include <string>

class Student {

public:

	Student( void ) : _logic("ldefault") {

		std::cout << "Student " << this->_logic << " is born" << std::endl;
		return;
	}

	~Student( void ) {

		std::cout << "Student " << this->_logic << " died" << std::endl;
		return;
	}
private:
	std::string _logic;
};

int main(){

	Student*	students = new Student[42];

	delete [] students;
}
