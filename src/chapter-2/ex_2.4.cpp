/* Author                      : Sudharshan Kannan
   File Name                   : ex_2.4.cpp
   Timestamp                   : 2023-07-19 00:47:37
   Description                 : Understand signed and unsigned conversions in arithmetic types
*/

#include <iostream>

int main(){
    unsigned u = 10, u2 = 42; 
    std::cout << u2 - u << std::endl;           // 42 - 10 = 32
    std::cout << u - u2 << std::endl;           // 10 - 42 = -32 converted to unsigned, i.e 2^32 - 32
    int i = 10, i2 = 42;                
    std::cout << i2 - i << std::endl;           // 42 - 10 = 32
    std::cout << i - i2 << std::endl;           // 10 - 42 = -32
    std::cout << i - u << std::endl;            // temporary unsigned value 10 - 10 = 0
    std::cout << u - i << std::endl;            // 10 - temporary unsigned value 10 = 0

    std::cout << i - u2 << std::endl;           // temporary unsigned value 10 - 42 =  -32 converted to unsigned, i.e 2^32 - 32
    std::cout << u - i2 << std::endl;           // 10 - temporary unsigned value 42 = -32 converted to unsigned, i.e 2^32 - 32
    std::cout << i2 - u << std::endl;           // temporary unsigned value 42 - 10 = 32

    return 0;
}


