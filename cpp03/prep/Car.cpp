#include <iostream>
#include <string>

class Vehicule{

public:
	Vehicule();
	~Vehicule();

	std::string brand = "Ford";
	void	honk() {
		std::cout << "tutuuuuut\n";
	}
};

Vehicule::Vehicule(){

	std::cout << "Constructor Vehicule called\n";
}

Vehicule::~Vehicule(){

	std::cout << "Destructor Vehicule called\n";

}

class Car : public Vehicule {

public:

	Car();
	~Car();

	std::string brand = "Mustang";

};

Car::Car(){

	std::cout << "Constructor Car called\n";

}

Car::~Car(){

	std::cout << "Destructor Car called\n";

}

int	main( void ) {

	Car myCar;

	myCar.honk();
	std::cout << myCar.Vehicule::brand + " " + myCar.brand << '\n';

	return 0;
}
