#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	std::cout << "Constructor PhoneBook called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Destructor PhoneBook called" << std::endl;
	return;
}

int	PhoneBook::getIndex( void ) const{

	return PhoneBook::_i;
}

void	PhoneBook::printArray( void ) {

	std::cout << ".__________.__________.__________.__________." << std::endl;
	
	for(int i = 0; i < 8; i++){

		std::cout <<  "|" << _Contact[i].getFirstNameDisplay() << std::setw(11 - _Contact[i].getFirstNameDisplay().length())\
		<< "|" << _Contact[i].getLastNameDisplay() << std::setw(11 - _Contact[i].getLastNameDisplay().length()) << "|" \
		<< _Contact[i].getNickNameDisplay() << std::setw(11 - _Contact[i].getNickNameDisplay().length()) << "|" \
		<< _Contact[i].getPhoneNbDisplay() << std::setw(11 -  _Contact[i].getPhoneNbDisplay().length()) << "|" << std::endl;
		std::cout << ".__________.__________.__________.__________." << std::endl;
	}
}

bool	PhoneBook::getInput( std::string &buf ) {

	if (!std::getline (std::cin, buf)) {

		if (std::cin.eof()) {

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		exit (EXIT_SUCCESS);
	}
	if ( buf.empty())
			return false;
	if (!this->_Contact->checkspace( buf ))
		return false;
	return true;
}

void	PhoneBook::initializeContact( void ) { 

	std::string	buf;
	static int loop = 0;

	if (this->getIndex() == 8) {
		PhoneBook::_i = 0;
		_Contact[0].clearString();
		loop = 1; 
	}
	if (loop == 1) {

		_Contact[this->getIndex()].clearString();
	}

	while (1) {
		std::cout << "first name: ";
		if (!this->getInput( buf ))
			continue;
		break;
	}
	_Contact[PhoneBook::_i].setFirstName( buf );

	while (1) {
		std::cout << "last name: ";
		if (!this->getInput( buf ))
			continue;
		break;
	}
	_Contact[this->getIndex()].setLastName( buf );

	while (1) {
		std::cout << "nickname: ";
		if (!this->getInput( buf ))
			continue;
		break;
	}
	_Contact[this->getIndex()].setNickName( buf );

	while (1) {
		std::cout << "phone number: ";
		if (!this->getInput( buf ))
			continue;
		break;
	}
	_Contact[this->getIndex()].setPhoneNb( buf );

	while (1) {
		std::cout << "darkest secret: ";
		if (!this->getInput( buf ))
			continue;
		break;
	}
	_Contact[this->getIndex()].setDarkestSecret( buf );

	PhoneBook::_i += 1;
}

bool	PhoneBook::checkNb( std::string	buf ) {

	for (int i = 0; buf[i]; i++) {

		if (!( buf[i] >= '0' && buf[i] <= '8') || buf[1])
			return false;
	}
	return true;
}

void	PhoneBook::DisplayContact( void ) {

	std::string	buf;
	int num = 0;

	std::cout << "Which index do you want to access: ";
	while (!this->getInput( buf ) || !this->checkNb( buf ) )
		std::cout << "Which index do you want to access: ";
		
	num = std::atoi( buf.c_str() );

	std::cout << buf << ": " << std::endl;
	std::cout << "first name: " << _Contact[num].getFirstName() << std::endl;
	std::cout << "last name: " << _Contact[num].getLastName() << std::endl;
	std::cout << "nickname: " << _Contact[num].getNickName() << std::endl;
	std::cout << "phone number: " << _Contact[num].getPhoneNb() << std::endl;
	std::cout << "darkest secret: " << _Contact[num].getDarkestSecret() << std::endl;

	return;
}

int PhoneBook::_i = 0;
