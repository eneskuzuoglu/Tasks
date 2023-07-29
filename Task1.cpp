include <iostream>
#include <cmath>

const double g = 9.80665; // Gravitational acceleration (m/s^2)

int main() {
    double t, x;

    std::cout << "Enter the time (seconds): ";
    std::cin >> t;

    x = 0.5 * g * pow(t, 2);

    std::cout << "The distance traveled in " << t << " seconds is: " << x << " meters." << std::endl;

    return 0;
}
