#include "matrix.hpp"
#include <iostream>

int main()
{
    Matrix mat(4, 3);

    mat(0, 1) = 5;
    mat(1, 2) = 10;
    mat(2, 1) = 15;

    mat.display_matrix();
    return 0;
}