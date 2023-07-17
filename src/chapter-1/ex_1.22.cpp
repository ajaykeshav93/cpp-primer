/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.22.cpp
   Timestamp                   : 2023-07-17 00:45:09
   Description                 : Read transactions from standard input and print their sum to standard output.
*/


#include "Sales_item.h"

#include <iostream>

int main(){
    Sales_item sum, trans;
    std::cout << "Enter transactions with same ISBN.." << std::endl;
    while(std::cin >> trans){
        sum += trans;
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}
