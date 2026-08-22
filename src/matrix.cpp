// matrix.cpp include the matrix.hpp header file.
#include "matrix.hpp"
#include <iostream>


// Constructor defination
Matrix::Matrix(std::vector<std::vector<int>> d_array) {
    matrix = d_array;
}

// Function defination
void Matrix::display_matrix()
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "[" << matrix[i][j] << "] ";
        }
        std::cout << "\n";
    }
}