/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.23.cpp
   Timestamp                   : 2023-07-18 01:16:28
   Description                 : Read transactions and count how many transactions occur for each ISBN.
*/

#include "Sales_item.h"

#include <iostream>

int main(){
    Sales_item trans;
    if(std::cin >> trans){
        int cnt = 1;
        Sales_item current;
        while(std::cin >> current){
            if(trans.isbn() == current.isbn()){
                ++cnt;
            }
            else {
                cnt = 1;
                trans = current;
            }
        }
        std::cout << trans.isbn() << " occurred " << cnt << " times. " << std::endl;
    }
    return 0;
}
