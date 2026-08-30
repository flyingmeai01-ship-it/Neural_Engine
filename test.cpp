// Test program file

// test or expermentation area
#include <iostream>
// #include <functional>
#include <cmath>
/*
p(x) = 1/(1 + e^-x)
*/

int main() {
    double value;
    value = expo(1.0);
    std::cout << "sigmoid : " << value << std::endl;
    // value = expo(-1);
    // std::cout << "sigmoid : " << value << std::endl; 
    return 0;
}