#include <iostream>
#include <string>
#include <bits/stdc++.h>

int	main( void ) {

	std::string	S, T;
	std::getline (std::cin, S);

	std::stringstream X(S);

	while (getline(X, T, '\n'))
		std::cout << T << std::endl;
	
	return 0;
}
