/* Author                      : Sudharshan Kannan
   File Name                   : ex_2.8.cpp
   Timestamp                   : 2023-07-22 00:43:17
   Description                 : Use escape sequences to print desired characters.
*/

#include <iostream>

int main(){
    std::cout << 2 << '\115' << std::endl;                      // print 2M followed by newline
    std::cout << 2 << '\011' << '\115' << std::endl;            // print 2  M followed by newline
    return 0;
}

