#include "include/matrix.hpp"
#include <stdexcept>
#include <iostream>

int main()
{
        Matrix A(2, 2);
        A(0, 0) = 2;
        A(0, 1) = 6;
        A(1, 0) = -9;
        A(1, 1) = 3;

        std::cout << "Original Matrix : \n";
        A.display_matrix();

    Matrix activated = A.map(Activations::Sigmoid::forward);
    std::cout << "\nSigmoid Forward Pass: ";
    activated.display_matrix();
    Matrix gradients = A.map(Activations::Sigmoid::backward);
    std::cout << "\nSigmoid backward Pass: ";
    gradients.display_matrix();

    return 0;
}
