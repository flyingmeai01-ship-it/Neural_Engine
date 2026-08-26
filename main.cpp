#include "include/matrix.hpp"
#include <stdexcept>
#include <iostream>

int main()
{
    try
    {
        Matrix A(2, 2);
        A(0, 0) = 2;
        A(0, 1) = 6;
        A(1, 0) = -9;
        A(1, 1) = 3;

        Matrix B(2, 2);
        B(0, 0) = 4;
        B(0, 1) = -5;
        B(1, 0) = -1;
        B(1, 1) = 3;

        Matrix C = A * B;
        // C = A * B;

        A.display_matrix();
        B.display_matrix();
        std::cout << "--- Matrix Multiplication (A * B) ---" << std::endl;
        C.display_matrix();

        Matrix D = A.hadamard(B);

        std::cout << "--- Matrix Multiplication Hadamard product(A * B) ---" << std::endl;
        D.display_matrix();
    }

    catch (const std::invalid_argument &e)
    {
        std::cerr << "Caught Error! " << e.what() << std::endl;
    }

    std::cout << "Program recovered and continues running safely!" << std::endl;
    return 0;
}
