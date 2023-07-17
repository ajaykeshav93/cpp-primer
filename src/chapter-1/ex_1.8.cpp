/* Author                      : Sudharshan Kannan
   File Name                   : ex_1.8.cpp
   Timestamp                   : 2023-07-15 12:11:55
   Description                 : Demonstrate comment pairs behavior
*/


#include <iostream>

int main(){
    std::cout << "/*";                      // legal
    std::cout << "*/";                      // legal
    // std::cout << /* "*/" */;             // illegal since the trailing " */ will be treated as source code 
     std::cout << /*  "*/" /*  "/*"  */;    // legal as we will only print " /* " 
    return 0;
}
