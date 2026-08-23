// matrix.cpp include the matrix.hpp header file.
#include "matrix.hpp"
#include <iostream>
#include <cassert>


// Constructor defination
Matrix::Matrix(size_t r, size_t c, double initial_val)
    : rows(r), cols(c), matrix(r * c, initial_val) {}

    double& Matrix::operator()(size_t r, size_t c) {
        assert(r < rows && c < cols && "Index out of bounds!");
        return matrix[r * cols + c];
    }

    const double& Matrix::operator()(size_t r, size_t c) const{
        assert(r < rows && c < cols && "Index out of bounds!");
        return matrix[r * cols + c];
    }

    size_t Matrix::getrows() const { return rows; }
    size_t Matrix::getcols() const { return cols; }
// Function defination

void Matrix::display_matrix()
{
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << (*this)(i, j) << " ";
        }
        std::cout << "\n";
    }
}