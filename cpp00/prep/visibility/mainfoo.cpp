#include "sample_class_foo.hpp"

int	main( void ) {

	Samplefoo	instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	instance._private_Foo = 45;
	std::cout << "instance._private_Foo: " << instance._private_Foo << std::endl;

	instance.publicBar();
	instance._private_Bar();

	return 0;
}