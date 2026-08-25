// If matrix_hpp is not defined, define it ( start of header )
#ifndef MATRIX_HPP

// Define MATRIX_HPP to prevent multiple file inclusions
#define MATRIX_HPP

#include <cassert>
#include <vector>

class Matrix {
private:
    size_t rows;
    size_t cols;
    std::vector<double> matrix;

public:
    Matrix ( size_t r, size_t c, double initial_val = 0.0);
    double& operator()(size_t r, size_t c);
    const double &operator()(size_t r, size_t c)const;
    size_t getrows()const;
    size_t getcols()const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    void display_matrix();
};


#endif
