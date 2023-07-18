/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.25.cpp
   Timestamp                   : 2023-07-18 01:24:33
   Description                 : Bookstore program
*/


#include "Sales_item.h"

#include <iostream>

int main(){
    Sales_item total;
    if(std::cin >> total){
        Sales_item trans;
        while(std::cin >> trans){
            if(total.isbn() == trans.isbn()){
                total += trans;
            }
            else{
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else{
        std::cerr << "No Data ?";
        return -1;
    }
    return 0;
}
