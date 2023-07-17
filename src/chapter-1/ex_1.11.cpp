/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.11.cpp
   Timestamp                   : 2023-07-16 23:18:17
   Description                 : Print the range of numbers in the range specified by the user
*/


#include <iostream>

int main(){
    int lb = 0, ub = 0;
    std::cout << "Enter the range : ";
    std::cin >> lb >> ub;
    while(lb <= ub){
        std::cout << lb << " ";
        ++lb;
    }
    return 0;
}
