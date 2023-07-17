/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.20.cpp
   Timestamp                   : 2023-07-17 00:28:32
   Description                 : Read each Sales_item transaction and write to standard output 
*/


#include "Sales_item.h"

#include <iostream>

int main(){
   
   Sales_item trans;
   std::cout << "Enter transactions separated by whitespace: " << std::endl;
   while(std::cin >> trans){
      std::cout << trans << std::endl;
   }
   return 0;
}
