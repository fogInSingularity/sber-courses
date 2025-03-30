#include <iostream>
#include <cmath>

double GetNormalDirstibution(double x) {
    return 0.5 * (1 + std::erf(x * std::sqrt(0.5)));
}

double GetCallOption(double S, double K, double T, double r, double sigma) {
    double d1 = (std::log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * std::sqrt(T));
    double d2 = d1 - sigma * std::sqrt(T);
    double N1 = GetNormalDirstibution(d1);
    double N2 = GetNormalDirstibution(d2);
    double C = S * N1 - K * std::exp(-r * T) * N2;
    return C;
}

int main() {
    double S = 100;
    double K = 100;
    double T = 1;
    double r = 0.05;
    double sigma = 0.1;

    std::cout << GetCallOption(S, K, T, r, sigma) << std::endl;

    return 0;
}
