#include "include/matrix.hpp"
#include <iostream>

int main()
{
    Matrix A(2, 2);

    A(0, 0) = 0;
    A(0, 1) = 5;
    A(1, 0) = 10;
    A(1, 1) = 15;
    A.display_matrix();
    // Matrix B;
    A = A.transpose();
    A.display_matrix();
    // B.display_matrix();

    return 0;
}