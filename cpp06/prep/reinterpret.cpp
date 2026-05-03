#include <iostream>
#include <typeinfo>

int main(){

    float   a = 420.042f;

    void    *b = &a;
    int     *c = reinterpret_cast<int *>(b);
    int     & d = reinterpret_cast<int &>(b);

    std::cout << a << std::endl ;
    std::cout << b << std::endl ;
    std::cout << *c << std::endl ;
    std::cout << d << std::endl ;

    void    *e = &a;
    int     *f = static_cast<int *>(e);
    int     & g = reinterpret_cast<int &>(e);

    std::cout << e << std::endl ;
    std::cout << *f << std::endl ;
    std::cout << g << std::endl ;

    return 0;

}