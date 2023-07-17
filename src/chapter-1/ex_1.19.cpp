/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.19.cpp
   Timestamp                   : 2023-07-17 00:23:28
   Description                 : Revise ex_1.11 to account for range comparison.
*/


#include <iostream>

int main(){
    int lb = 0, ub = 0;
    std::cout << "Enter the range : ";
    std::cin >> lb >> ub;
    
    // Check lower-bound is smaller than upper bound.
    if(lb > ub){
        std::cerr << "Invalid range specified - upper bound cannot be smaller than lower bound.";
        return -1;
    }

    while(lb <= ub){
        std::cout << lb << " ";
        ++lb;
    }
    return 0;
}
