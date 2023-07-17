/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.9.cpp
   Timestamp                   : 2023-07-16 23:12:47
   Description                 : Use while loop to sum numbers from 50 to 100 inclusive
*/

#include <iostream>

int main(){
    int sum = 0, lb = 50;
    while(lb <= 100){
        sum += lb;
        ++lb;
    }
    std::cout << "Sum of numbers 50 to 100 inclusive = " << sum << std::endl;
    return 0;
}


