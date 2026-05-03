#include <iostream>
#include <string>

int main( void ){

    int     a = 42;//REFERENCE VALUE

    double  b = a;//IMPLICIT PROMOTION -> OK
    // int     c = b;//IMPLICIT DEMOTION -> HELL NO !!
    int     d = static_cast<int>(b);//EXPLICIT DEMOTION -> OK, I OBEY
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << d << std::endl;
    return 0;
}