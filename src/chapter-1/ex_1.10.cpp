/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.10.cpp
   Timestamp                   : 2023-07-16 23:16:13
   Description                 : Use while loop and pre-increment operator to count down numbers from 10 to 0
*/


#include <iostream>

int main(){
    int n = 10;
    while(n >= 0){
        std::cout << n << std::endl;
        --n;
    }
    return 0;
}
