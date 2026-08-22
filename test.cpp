#include "matrix.hpp"
#include <iostream>

int main() {
    std::cout << "Enter two numbers for Addtion and Multiplcation: ";
    int a, b;
    std::cin >> a >> b; 

    std::cout << add(a, b) << std::endl;
    std::cout << multiply(a, b) << std::endl;

    return 0;
} 