#include "Contact.hpp"

Contact::Contact( void ) {

	std::cout << "Constructor Contact called" << std::endl;
	return;
}

Contact::~Contact( void ) {

	std::cout << "Destructor Contact called" << std::endl;
	return;
}

std::string 	Contact::shortenreplace ( std::string str ) {

	int len = str.length();

	if (len >= 10) {

		str = str.erase(10);
		str = str.replace(9, 1, 1, '.');
	}

	return str;
}

bool	Contact::checkspace( std::string str ) {

	int len = str.length();

	for(int i = 0; i < len; i++) {

		if ( isspace( str[i]) )
			return false;
		if ( str.empty() == true)
			return false;
	}
	return true;
}

std::string Contact::getFirstName( void ) const{

	return  this->_firstname;
}

std::string Contact::getLastName( void ) const{

	return  this->_lastname;
}

std::string Contact::getNickName( void ) const{

	return  this->_nickname;
}

std::string Contact::getPhoneNb( void ) const{

	return  this->_phonenb;
}

std::string Contact::getDarkestSecret( void ) const{

	return  this->_darkestsecret;
}

std::string Contact::getFirstNameDisplay( void ) const{

	return  this->_firstname_display;
}

std::string Contact::getLastNameDisplay( void ) const{

	return  this->_lastname_display;
}

std::string Contact::getNickNameDisplay( void ) const{

	return  this->_nickname_display;
}

std::string Contact::getPhoneNbDisplay( void ) const{

	return  this->_phonenb_display;
}

void Contact::setFirstName( std::string str ) {

	this->_firstname += str;
		
	str = this->shortenreplace(str);

	this->_firstname_display += str;
	return;
}

void Contact::setLastName( std::string str ) {

	this->_lastname += str;

	str = this->shortenreplace(str);

	this->_lastname_display += str;
	return;
}

void Contact::setNickName( std::string str ) {
	
	this->_nickname += str;

	str = this->shortenreplace(str);

	this->_nickname_display += str;
	return;
}

void Contact::setPhoneNb( std::string str ) {

	this->_phonenb += str;

	str = this->shortenreplace(str);

	this->_phonenb_display += str;
	return;
}

void Contact::setDarkestSecret( std::string str ) {
		
	this->_darkestsecret += str;
	return;
}

void	Contact::clearString( void ) {

	this->_firstname.clear();
	this->_lastname.clear();
	this->_nickname.clear();
	this->_phonenb.clear();
	this->_darkestsecret.clear();
	this->_firstname_display.clear();
	this->_lastname_display.clear();
	this->_nickname_display.clear();
	this->_phonenb_display.clear();
	return;
}