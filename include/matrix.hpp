// If matrix_hpp is not defined, define it ( start of header )
#ifndef MATRIX_HPP

// Define MATRIX_HPP to prevent multiple file inclusions
#define MATRIX_HPP

#include <vector>

class Matrix {
private:
    std::vector<double> matrix;

public:
    Matrix ( const std::vector<double>& d_array );
    void display_matrix();
};


#endif
