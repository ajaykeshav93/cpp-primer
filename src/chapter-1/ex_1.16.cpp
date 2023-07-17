/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.16.cpp
   Timestamp                   : 2023-07-16 23:56:03
   Description                 : Sum of integers read from the standard input
*/


#include <iostream>

int main(){
    int sum = 0, n = 0;
    while(std::cin >> n){
        sum += n;
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}
