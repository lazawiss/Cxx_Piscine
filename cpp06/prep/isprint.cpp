#include <iostream>
#include <string>
#include <limits.h>
#include <float.h>

int main(){

    if (isprint(2147483647))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}
