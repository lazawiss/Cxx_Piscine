#include <iostream>
#include <string>
#include <cstdlib>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


int is_prime( int num ){

    int cnt = 0;

    if (num <= 1 || (( num > 2 ) && (num % 2 == 0)))
        return 0;
    else {

        if ( num == 2)
            return 1;
        else {

            for ( int i = 3; i * i <= num ; i += 2){
                if ( num % i == 0)
                    cnt++;
            }
        }
        if (cnt > 0)
            return 0;
        else 
            return 1; 
    }
}

int main() {

    int range[] ={3,4,5,6,7,8,9,12,13,14,17,23};
    for (int i = 0; i < 100; i++) {
        
        int num = rand() % 12;
        int res = is_prime(range[num]);
        std::cout << "res:" << res << std::endl;
    }

    return 0;
}