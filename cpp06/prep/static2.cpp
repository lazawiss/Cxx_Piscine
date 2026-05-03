#include <iostream>

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelated {};

int main(){

    Child1  a;//REFERENCE VALUE

    Parent  *b = &a;//IMPLICIT UPCAST -> OK
    Child1  *c = b;//IMPLICIT DOWNCAST -> HELL NO!!
    Child2  *d = static_cast<Child2 *>(b);//EXPLICIT DOWNCAST -> OK,I OBEY
    Unrelated  *e = static_cast<Unrelated *>(&a);//Explicit conversion -> NO!!
    return 0;
}