#include "../include/activations.hpp"
#include <cmath>
#include <algorithm>

double Activations::Sigmoid::forward(double x)
{
    double s = 1.0 / (1.0 + std::exp(-x));
    return s;
}
double Activations::Sigmoid::backward(double x)
{
    double s = forward(x);
    return s * (1 - s);
}
double Activations::ReLU::forward(double x)
{
    return std::max(0.0, x);
}
double Activations::ReLU::backward(double x)
{
    return x > 0.0 ? 1.0 : 0.0;
}
double Activations::tanh::forward(double x)
{
    return (std::exp(x) - std::exp(-x)) / (std::exp(x) + std::exp(-x));
}
double Activations::tanh::backward(double x)
{
    double t = forward(x);
    return (1.0 - t * t);
}