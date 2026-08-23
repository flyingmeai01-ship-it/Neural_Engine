// matrix.cpp include the matrix.hpp header file.
#include "matrix.hpp"
#include <iostream>


// Constructor defination
Matrix::Matrix(const std::vector<double>& d_array) 
   : matrix(d_array)
   {}

    // int row = d_array.size();
    // int col = d_array[0].size();

// Function defination
void Matrix::display_matrix()
{
    for (const auto& current_row : matrix) {
        for (double value : current_row) {
            std::cout << "[" << value << "] ";
        }
        std::cout << "\n";
    }
}