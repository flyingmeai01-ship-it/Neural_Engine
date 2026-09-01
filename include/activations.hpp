#pragma once
#include <cmath>

// For Mathematical operations using namespace for avoiding name collisions
namespace Activations
{
    namespace Sigmoid
    {
        double forward(double x);
        double backward(double x);
    }
    namespace ReLU
    {
        double forward(double x);
        double backward(double x);
    }
    namespace tanh
    {
        double forward(double x);
        double backward(double x);
    }
}
