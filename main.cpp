#include "matrix.hpp"
#include <iostream>

int main()
{
    Matrix A(2, 2);

    A(0, 0) = 0;
    A(0, 1) = 5;
    A(1, 0) = 10;
    A(1, 1) = 15;

    Matrix B(2, 2);

    B(0, 0) = 15;
    B(0, 1) = 10;
    B(1, 0) = 5;
    B(1, 1) = 0;

    A.display_matrix();
    B.display_matrix();
    // Matrix C = A * 2.0;
    A*=2.0;
    // Matrix D = A - B;
    Matrix C(3, 3, 10.0);
    C.display_matrix();
    A.display_matrix();
    return 0;
}