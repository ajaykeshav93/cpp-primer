/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.5.cpp
   Timestamp                   : 2023-07-15 11:29:42
   Description                 : Demonstrate cout operands by printing them line-by-line
*/

#include <iostream>

int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << "Product = ";
    std::cout << a * b;
    std::cout << std::endl;
    return 0;
}
