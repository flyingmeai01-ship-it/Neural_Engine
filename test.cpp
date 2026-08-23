#include <vector>
#include <iostream>
#include <cassert>

class Matrix {
private:
    size_t rows;
    size_t cols;
    std::vector<double> matrix; // 1D storage, 2D Data.


public:
    // Initailize matrix with given dimensions and defaul value.
    Matrix(size_t r, size_t c, double initial_val = 0) : rows(r), cols(c), matrix(r * c, initial_val) {}

    // Overload the () operator for 2D style access: matrix(rows, cols)
    double& operator()(size_t r, size_t c) {
        assert(r < rows && c < cols && "Index out of bounds!");
        return matrix[r * cols + c];
    }

    // const version of operator for read only
    const double& operator()(size_t r, size_t c) const{
        assert(r < rows && c < cols && "Index out of bounds!");
        return matrix[r * cols + c];
    }

    // 
    size_t getrows() const { return rows; }
    size_t getcols() const { return cols; }
};
int main() {
    // Matrix initiazied with 0's
    Matrix mat(4, 3);

    // Assigned value
    mat(0, 1) = 5;
    mat(1, 2) = 10;
    mat(2, 2) = 15;
    mat(3, 2) = 20;

    // Print matrix
    for (size_t i = 0; i < mat.getrows(); i++) {
        for (size_t j = 0; j < mat.getcols(); j++) {
            std::cout << mat(i, j) << " ";
        }
        std::cout << "\n";
    }

    return 0;
}