/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.21.cpp
   Timestamp                   : 2023-07-17 00:37:53
   Description                 : Read two Sales_item transactions and print their sum to standard output.
*/


#include "Sales_item.h"

#include <iostream>

int main(){
    Sales_item trans1, trans2;
    std::cout << "Enter two transactions separated by whitespace: " << std::endl;
    std::cin >> trans1 >> trans2;
    std::cout << "Sum = " << trans1 + trans2 << std::endl;
    return 0;
}
