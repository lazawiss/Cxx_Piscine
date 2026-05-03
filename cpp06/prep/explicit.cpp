#include <iostream>

class A {};
class B {};

class C {

public:
    
                C( A const & _ ) { return; }
    explicit    C( B const & _ ) { return; }
};

void    f( C const & _) {

    return;
}

int main() {

    C c(B); //construction directe

    f( A() );//implicit conversion OK
    f( B() );// implicit conversion NOT OK : CONSTRUCTOR IS EXPLICIT
    f( C(B()) );//explicit conversion OK

    return 0;
}
