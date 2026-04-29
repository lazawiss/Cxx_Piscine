#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main( void ) {

	PhoneBook	PhoneBook;
	
	std::string	buf;
	std::string	str1("ADD");
	std::string	str2("SEARCH");
	std::string	str3("EXIT");

	while (1) {
		
		while (1) {
			
			std::cout << "Enter a command (ADD, SEARCH OR EXIT): ";
			if (!PhoneBook.getInput( buf ))
				continue ;
			break ;
		}
		
		if (str1.compare(buf) == 0)
			PhoneBook.initializeContact();

		else if (str2.compare(buf) == 0)
			PhoneBook.DisplayContact();

		if (str3.compare(buf) == 0)
			return 0;

		PhoneBook.printArray();
	}

	return 0;
}
