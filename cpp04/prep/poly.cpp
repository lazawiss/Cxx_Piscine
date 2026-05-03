#include <iostream>
#include <string>

class Character{

public:

	virtual void	sayHello( std::string const & target );
};

class Warrior : public Character{

public:

	virtual void	sayHello( std::string const & target );
};

class Cat{

};

void	Character::sayHello( std::string const & target ){

	std::cout << "Hello " << target << " !\n";

}

void 	Warrior::sayHello( std::string const & target ){

	std::cout << "F*** off " << target << ", I don't like you !\n";

}

int main( void ){

	Warrior*	a = new Warrior();
	Character*	b = new Warrior();
	// Warrior*	c = new Character();
	// Warrior*	d = new Cat();

	a->sayHello("students");
	b->sayHello("students");

}