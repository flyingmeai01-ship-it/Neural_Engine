// Test program file

// test or expermentation area
#include <iostream>
// #include <functional>
// #include <cmath>
/*
p(x) = 1/(1 + e^-x)
*/

// r(x) = max(0, x);
// x if x >= 0;
// 0 , x < 0;

double relu(double x) {
    double r;
    if (x >= 0) {
        r = x;
    }
    else {
        r = 0;
    }
    return r;
}
int main() {
    double x = 8.0;
    double val = relu(x);

    std::cout << val << std::endl;
    return 0;
}