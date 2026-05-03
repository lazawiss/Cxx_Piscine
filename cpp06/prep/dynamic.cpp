#include <iostream>
#include <typeinfo>
#include <exception>

        
class Parent { public: virtual ~Parent(){}};
class Child1: public Parent {};
class Child2: public Parent { public: void test(){ std::cout << "test" << std::endl;}};

int main( void ){
    
    Child1  a;//REFERENCE VALUE
    Parent  *b = &a;//IMPLICIT UPCAST -> OK

    //EXPLICIT DOWNCAST -> SUSPENS
    Child1  *c = dynamic_cast<Child1 *>(b);
    if ( c == NULL )
        std::cout << "Conversion is NOT ok" << std::endl;
    else
        std::cout << "Conversion is ok" << std::endl;
    
    //EXPLICIT DOWNCAST -> SUSPENS
    try {

        Child2 & d = dynamic_cast<Child2 &>(*b);
        std::cout << "Conversion is ok:" << std::endl;
        d.test();

    }
    catch (std::bad_cast &bc){

        std::cout << "Conversion is NOT ok: " << bc.what() << std::endl;
        return 0;

    }

    return 0;

}
