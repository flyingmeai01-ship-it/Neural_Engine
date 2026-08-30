#pragma once

#include <cassert>
#include <vector>
// #include <map>
#include <functional>

class Matrix {
private:
    size_t rows;
    size_t cols;
    std::vector<double> matrix;

public:
    Matrix(size_t r, size_t c, double initial_val = 0.0);

    double& operator()(size_t r, size_t c);
    const double& operator()(size_t r, size_t c)const;

    size_t getrows()const;
    size_t getcols()const;

    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;

    Matrix operator*(double scalar) const;
    Matrix& operator*=(double scalar);

    Matrix transpose() const;

    Matrix operator*(const Matrix& other) const;

    Matrix hadamard(const Matrix& other) const;

    Matrix  map(std::function<double(double)> func)const;

    void display_matrix() const;
};

// For Mathematical operations using namespace for avoiding name collisions
namespace Activations {
    namespace Sigmoid {
        double forward(double x);
        double backward(double x);
    }
    namespace ReLU {
        double forward(double x);
        double backward(double x);
    }
    
}
