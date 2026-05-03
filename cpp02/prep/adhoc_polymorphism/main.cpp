#include "sample.hpp"

int main( void ){

	Sample S;
	S.bar('a');
	S.bar(42);
	S.bar(5.943f);
	S.bar(S);
	return 0;
}