#include <iostream>
#include <cstddef>
#include <random>

constexpr size_t kIters = 1'000'000;

int main() {
    size_t number_of_points = 0;
    size_t points_indide_cirl = 0;

    for (size_t i = 0; i < kIters; i++) {
        std::random_device rdevice;
        std::uniform_real_distribution<double> udistr{0.0, 1.0};
        double x = udistr(rdevice);
        double y = udistr(rdevice);
        if (x * x + y * y <= 1) {
            points_indide_cirl++;
        }
    }   
    number_of_points = kIters;

    double pi = 4 * static_cast<double>(points_indide_cirl) / static_cast<double>(number_of_points);

    std::cout << "pi: " << pi << std::endl;
}
