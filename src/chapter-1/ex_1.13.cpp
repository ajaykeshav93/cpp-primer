/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.13.cpp
   Timestamp                   : 2023-07-16 23:28:00
   Description                 : Rewrite ex_1.9, ex_1.10, ex_1.11 using for loops
*/


#include <iostream>

int main(){
    int sum = 0;
    for(int i = 50; i <= 100; ++i){
        sum += i;
    }
    std::cout << sum << std::endl;
    std::cout << "=========================================" << std::endl;
    
    for(int i = 10; i >=0; --i){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "=========================================" << std::endl;

    int lb = 0, ub = 0;
    std::cout << "Enter the range : ";
    std::cin >> lb >> ub;
    for(; lb <= ub; ++lb){
        std::cout << lb << " ";
    } 
    std::cout << std::endl;
    std::cout << "=========================================" << std::endl;
    return 0;
}
