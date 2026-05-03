/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 20:43:38 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/07 19:22:09 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
int main() {
    
{    
    std::cout << "\033[38;2;252;144;3mTEST 1\033[0m\n";
     
    Data  ptr;
    
    ptr.char_value = 'a';
    ptr.int_value = 42;
    ptr.float_value = -4.052f;
    ptr.double_value = 58.36;

    uintptr_t uint_ptr = 0;
    
    std::cout << "char_value = " << ptr.char_value << std::endl;
    std::cout << "int_value = " << ptr.int_value << std::endl;
    std::cout << "float_value = " << ptr.float_value << std::endl;
    std::cout << "double_value = " << ptr.double_value << std::endl;
    
    std::cout << "uint_ptr = " << uint_ptr << std::endl;

    uint_ptr = Serializer::serialize(&ptr);

    std::cout << "uint_ptr = " << uint_ptr << std::endl;
    
    Data* restored = Serializer::deserialize(uint_ptr);

    std::cout << "restored = " << restored << std::endl;
    std::cout << "ptr = " << &ptr << std::endl;

    if (&ptr == restored) {
        std::cout << "Success: The original and restored pointers are equal!" << std::endl;
    } else {
        std::cout << "Error: The original and restored pointers are NOT equal!" << std::endl;
    }

    std::cout << "char_value = " << restored->char_value << std::endl;
    std::cout << "int_value = " << restored->int_value << std::endl;
    std::cout << "float_value = " << restored->float_value << std::endl;
    std::cout << "double_value = " << restored->double_value << std::endl;
    
    std::cout << '\n';
}
{
    std::cout << "\033[38;2;252;144;3mTEST 2\033[0m\n";
     
    Data  ptr;
    
    ptr.char_value = '0';
    ptr.int_value = 0;
    ptr.float_value = 0.0f;
    ptr.double_value = 0.0;
    
   
    uintptr_t uint_ptr = 0;
    
    std::cout << "char_value = " << ptr.char_value << std::endl;
    std::cout << "int_value = " << ptr.int_value << std::endl;
    std::cout << "float_value = " << ptr.float_value << std::endl;
    std::cout << "double_value = " << ptr.double_value << std::endl;
    
    std::cout << "uint_ptr = " << uint_ptr << std::endl;

    uint_ptr = Serializer::serialize(&ptr);

    std::cout << "uint_ptr = " << uint_ptr << std::endl;
    
    Data* restored = Serializer::deserialize(uint_ptr);

    std::cout << "restored = " << restored << std::endl;
    std::cout << "ptr = " << &ptr << std::endl;

    if (&ptr == restored) {
        std::cout << "Success: The original and restored pointers are equal!" << std::endl;
    } else {
        std::cout << "Error: The original and restored pointers are NOT equal!" << std::endl;
    }

    std::cout << "char_value = " << restored->char_value << std::endl;
    std::cout << "int_value = " << restored->int_value << std::endl;
    std::cout << "float_value = " << restored->float_value << std::endl;
    std::cout << "double_value = " << restored->double_value << std::endl;
    std::cout << '\n';

}
{
    std::cout << "\033[38;2;252;144;3mTEST 3\033[0m\n";
     
    Data  ptr;
    
    ptr.char_value = CHAR_MAX - 1;//127 - 1
    ptr.int_value = INT_MAX;
    ptr.float_value = FLT_MAX;
    ptr.double_value = DBL_MAX;
    
   
    uintptr_t uint_ptr = 0;
    
    std::cout << "char_value = " << ptr.char_value << std::endl;
    std::cout << "int_value = " << ptr.int_value << std::endl;
    std::cout << "float_value = " << ptr.float_value << std::endl;
    std::cout << "double_value = " << ptr.double_value << std::endl;
    
    std::cout << "uint_ptr = " << uint_ptr << std::endl;

    uint_ptr = Serializer::serialize(&ptr);

    std::cout << "uint_ptr = " << uint_ptr << std::endl;
    
    Data* restored = Serializer::deserialize(uint_ptr);

    std::cout << "restored = " << restored << std::endl;
    std::cout << "ptr = " << &ptr << std::endl;

    if (&ptr == restored) {
        std::cout << "Success: The original and restored pointers are equal!" << std::endl;
    } else {
        std::cout << "Error: The original and restored pointers are NOT equal!" << std::endl;
    }

    std::cout << "char_value = " << restored->char_value << std::endl;
    std::cout << "int_value = " << restored->int_value << std::endl;
    std::cout << "float_value = " << restored->float_value << std::endl;
    std::cout << "double_value = " << restored->double_value << std::endl;
    std::cout << '\n';

}
{
    std::cout << "\033[38;2;252;144;3mTEST 4\033[0m\n";
     
    Data  ptr;
    
    ptr.char_value = 122;
    ptr.int_value = -42;
    ptr.float_value = -3.214f;
    ptr.double_value = -1000.78;
    
   
    uintptr_t uint_ptr = 0;
    
    std::cout << "char_value = " << ptr.char_value << std::endl;
    std::cout << "int_value = " << ptr.int_value << std::endl;
    std::cout << "float_value = " << ptr.float_value << std::endl;
    std::cout << "double_value = " << ptr.double_value << std::endl;
    
    std::cout << "uint_ptr = " << uint_ptr << std::endl;

    uint_ptr = Serializer::serialize(&ptr);

    std::cout << "uint_ptr = " << uint_ptr << std::endl;
    
    Data* restored = Serializer::deserialize(uint_ptr);

    std::cout << "restored = " << restored << std::endl;
    std::cout << "ptr = " << &ptr << std::endl;

    if (&ptr == restored) {
        std::cout << "Success: The original and restored pointers are equal!" << std::endl;
    } else {
        std::cout << "Error: The original and restored pointers are NOT equal!" << std::endl;
    }

    std::cout << "char_value = " << restored->char_value << std::endl;
    std::cout << "int_value = " << restored->int_value << std::endl;
    std::cout << "float_value = " << restored->float_value << std::endl;
    std::cout << "double_value = " << restored->double_value << std::endl;
    std::cout << '\n';

}

    return 0;
}