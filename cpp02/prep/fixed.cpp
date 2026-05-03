#include <iostream>

int	DoubletoFixed( double d){

	return int(d * double(1 << 8) + ( d >= 0 ? 0.5 : -0.5));
}

double	FixedtoDouble( int d){

	return double(d) / double(1 << 8);
}

int	main( void ){

	// 16.16
	int a = DoubletoFixed(42.42f);
	std::cout << a << '\n';
	double z = FixedtoDouble(a);
	std::cout << z << '\n';


	return 0;
}