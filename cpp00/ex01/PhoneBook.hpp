#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#pragma once

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <array>
#include <cassert>
#include <iomanip>
#include <bits/stdc++.h>
#include <cctype>
#include <limits>




class	PhoneBook {

public:

			PhoneBook( void );
			~PhoneBook( void );
	int		getIndex( void ) const;
	
	bool	getInput( std::string &buf );

	void	initializeContact( void );

	void	printArray( void );
	void	DisplayContact( void );

	bool	checkNb( std::string buf );

private:

	Contact		_Contact[8];
	std::string _array[8];
	static int	_i;
};

#endif
