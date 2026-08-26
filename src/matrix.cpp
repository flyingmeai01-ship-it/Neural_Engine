// matrix.cpp include the matrix.hpp header file.
#include "../include/matrix.hpp"
#include <iostream>
#include <cassert>
#include <stdexcept>
#include <string>


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

    Matrix Matrix::operator+(const Matrix& other)const {
        assert(rows == other.rows && cols == other.cols);

        Matrix result(rows, cols);
        for (size_t n = 0; n < rows * cols; ++n) {
            result.matrix[n] = matrix[n] + other.matrix[n];
        }
        return result;
    }

    Matrix Matrix::operator-(const Matrix& other) const {
        assert(rows == other.rows && cols == other.cols);
        Matrix result(rows, cols); 
            for (size_t n = 0; n < rows * cols; ++n) {
                result.matrix[n] = matrix[n] - other.matrix[n];
        }
        return result;
    }

    Matrix Matrix::operator*(double scalar) const {

        Matrix result(rows, cols);
        for (size_t n = 0; n < rows * cols; ++n) {
            result.matrix[n] = matrix[n] * scalar;
        }
        return result;
    }
    Matrix& Matrix::operator*=(double scalar) {

        // Matrix& result(rows, cols);
        for (size_t n = 0; n < rows * cols; ++n) {
            matrix[n] *= scalar;
        }
        return *this;
    }
    // Function defination

    Matrix Matrix::transpose() const {
        Matrix result(cols, rows);

        for (size_t r = 0; r < rows; ++r) {
            for (size_t c = 0; c < cols; ++c) {
                result(c, r) = (*this)(r, c);
            }
        }
        return result;
    }

    Matrix Matrix::operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrix Multiplication dimensions mismatch: A.cols (" + std::to_string(cols) + ") must equal B.rows(" + std::to_string(other.rows) + ")");
        }

        // =======================================
        // Active logic I-K-J Loop reordring.
        // =======================================
        Matrix result(rows, other.cols);
        
        for (size_t i = 0; i < rows; ++i) {             
            for (size_t k = 0; k < cols; ++k) {
                const double temp = (*this)(i, k);
                for (size_t j = 0; j < other.cols; ++j) {
                    result(i, j) += temp * other(k, j);
                }
            }
        }

    // =========================================================================
    // ALTERNATIVE LOGIC: Pre-Transposition Method (First this logic was used and its my approach)
    // =========================================================================
    // Matrix B_T = other.transpose(); // Allocates O(N*P) heap memory
    // for (size_t i = 0; i < rows; ++i) {
    //     for (size_t j = 0; j < other.cols; ++j) {
    //         double sum = 0.0;
    //         for (size_t k = 0; k < cols; ++k) {
    //             sum += (*this)(i, k) * B_T(j, k);
    //         }
    //         result(i, j) = sum;
    //     }
    // }

        return result;
    }

    Matrix Matrix::hadamard(const Matrix& other) const {
        Matrix result(rows, cols);

        assert(rows == other.rows && cols == other.cols && "Index outmatch!");

        for (size_t n = 0; n < rows * cols; ++n) {
            result.matrix[n] = matrix[n] * other.matrix[n];
        }
        return result;
    }

    void Matrix::display_matrix() const
    {
        for (size_t i = 0; i < rows; ++i)
        {
            for (size_t j = 0; j < cols; ++j)
            {
                std::cout << (*this)(i, j) << " ";
            }
            std::cout << "\n";
        }
        std::cout << std::endl;
    }

