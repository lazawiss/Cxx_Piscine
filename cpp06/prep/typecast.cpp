#include <iostream>

class Foo {
private:

    float _v;

public:

    Foo( float const v ) : _v(v) {}

    float   getV( void ) { return this->_v; }

    operator float( void ) { return this->_v; }
    operator int( void ) { return static_cast<int>(this->_v); }
};

int main() {


    Foo a( 420.042f );
    float   b = a;
    int     c = a;

    std::cout << a.getV() << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

}