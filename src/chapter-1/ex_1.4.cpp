/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.4.cpp
   Timestamp                   : 2023-07-15 11:26:50
   Description                 : Print the product of two integers to the standard output
*/

#include <iostream>

int main(){
    std::cout << "Enter two numbers: " << std::endl;
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << "Product = " << a * b << std::endl;
    return 0;
}
