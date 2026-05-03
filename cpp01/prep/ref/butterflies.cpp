#include <string>
#include <iostream>

void	byPtr( std::string* str) {

	*str += " and ponies";
	return;
}

void	byConstPtr( std::string const * str ) {

	std::cout << *str << std::endl;
	return;
}

void	byRef( std::string& str) {

	str += " and ponies";
	return;
}

void byConstRef( std::string const & str) {

	std::cout << str << std::endl;
	return;
}

int	main( void ) {

	std::string str = "I like butterflies";

	std::cout << str << std::endl;
	byPtr( &str );
	byConstPtr( &str);

	str = "I like otters";
	std::cout << str << std::endl;
	byRef( str );
	byConstRef( str );

	return 0;
}