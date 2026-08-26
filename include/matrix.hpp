<<<<<<< HEAD
// matrix_hpp define (start of header)
#ifndef MATRIX_HPP

// Define MATRIX_HPP to prevent multiple file inclusions
#define MATRIX_HPP
=======
// If matrix_hpp is not defined, define it ( start of header )
#pragma ../include/matrix.hpp
>>>>>>> fc6fba4 (bug fix)

#include <cassert>
#include <vector>

class Matrix {
private:
    size_t rows;
    size_t cols;
    std::vector<double> matrix;

public:
    Matrix(size_t r, size_t c, double initial_val = 0.0);

    double& operator()(size_t r, size_t c);
    const double &operator()(size_t r, size_t c)const;

    size_t getrows()const;
    size_t getcols()const;

    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;

    Matrix operator*(double scalar) const;
    Matrix& operator*=(double scalar);

    Matrix transpose() const;

    Matrix operator*(const Matrix& other) const;

    Matrix hadamard(const Matrix& other) const;

    void display_matrix() const;
};

#endif
