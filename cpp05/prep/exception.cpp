#include <stdexcept>
#include <iostream>
#include <string>

int main (){

    // {
    //     std::cout << "" << std::endl;

    //     try
    //         throw 505;
        
    // }
        
        try {
            
            int age = 20;
            if ( age <= 18 ) {
                
                throw std::exception();
            }
            else
                std::cout << "Access granted - you are enough";
        }
        catch ( std::exception e) {

            std::cout << "Access denied - You must be at least 18 years old \n ";
            // std::cout << " Age is : " << age;
        }

    return 0;

}