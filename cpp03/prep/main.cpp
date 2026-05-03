#include <iostream>
#include <string>

class Quadruped {

private:
	std::string	_name;

protected:
	int			legs = 4;

public:
	void		run( int distance ){

		std::cout << "Animal run " << distance << " km\n";
		return;
 	}

	int getNbOfLegs(){
		
		return this->legs;
	}
};

class Dog : public Quadruped {

private:

	int			legs = 8;

public:

	int getNbOfLegs(){
		
		return this->legs;
	}
};

int main( void ) { 

	Dog Dogg0;

	std::cout << "DoggO has " << Dogg0.getNbOfLegs() << " legs "<< '\n';
	std::cout << "DoggO has " << Dogg0.Quadruped::getNbOfLegs() << " legs "<< '\n';


	Dogg0.run(5);

	return 0;

}
