#include <string>
#include <iostream>

class Student {

private:
	std::string _login;
public:
	Student( std::string login ) : _login(login) {

		std::cout << "Student" << this->_login << "is born " << std::endl;
	}
	~Student( void ) {

		std::cout << "Student " << this->_login << " died" << std::endl;
	}
};

int main( void ) {

	Student bob = Student("bfubar");
	Student* jim = new Student("jbargo");

	delete jim;

	return 0;
}
