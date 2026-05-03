#include <iostream>

int main (){
    
    int a = 42;

    int const   *b = &a;// IMPLICIT PROMOTION -> OK
    // int         *c = b;// IMPLICIT DEMOTION -> HELL NO !
    int         *d = const_cast<int *>(b);// EXPLLICITE DEMOTION -> OK, I OBEY


    std::cout << a << std::endl ;
    std::cout << *b << std::endl ;
    // std::cout << *c << std::endl ;
    std::cout << *d << std::endl ;
    return 0;

}