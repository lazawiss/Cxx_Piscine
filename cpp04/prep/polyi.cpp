#include <iostream>
#include <string>

class ACharacter{

private:

	std::string 	_name;
public:

	virtual void	attack( std::string const & target) = 0;//methode pure : pas d'implementation, pas d'instanciation, CLASSE ABSTRAITE
	void			sayHello( std::string const & target );
};

class Warrior : public ACharacter{

public:

	virtual void	attack( std::string const & taeget );
};

void	ACharacter::sayHello( std::string const & target ){

	std::cout << "Hello " << target << " ! " << std::endl;
}

void 	Warrior::attack( std::string const & target ){

	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

class	ICoffeeMaker { //I = Interface : pas d'attribut 

public:

	virtual void	fillWaterTank( IWaterSource * src ) = 0;//CONTRAT
	virtual ICoffee*	makeCoffee( std::string const & type ) = 0;
}

int main(){

	ACharacter*	a = new Warrior();
	// ACharacter*	b = new ACharacter();

	a->sayHello("students");
	a->attack("Roger");
}


