#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cassert>

class	Contact {

public:

				Contact( void );
				~Contact( void );

	std::string	shortenreplace( std::string str );
	bool		checkspace( std::string str );

	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickName( void ) const;
	std::string	getPhoneNb( void ) const;
	std::string	getDarkestSecret( void ) const;
	std::string	getFirstNameDisplay( void ) const;
	std::string	getLastNameDisplay( void ) const;
	std::string	getNickNameDisplay( void ) const;
	std::string	getPhoneNbDisplay( void ) const;

	void		setFirstName( std::string str );
	void		setLastName( std::string str );
	void		setNickName( std::string str );
	void		setPhoneNb( std::string str );
	void		setDarkestSecret( std::string str );

	void		clearString( void );

private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phonenb;
	std::string	_darkestsecret;
	std::string	_firstname_display;
	std::string	_lastname_display;
	std::string	_nickname_display;
	std::string	_phonenb_display;
};

#endif