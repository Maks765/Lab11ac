#include <iostream>
#include <cmath>

double calculateAn(int n) {
    return 2.5 * std::pow(n, 2) + 7.3;
}

int main() {
    double sum = 0;
    int n = 1;

    while (sum <= 1000) {
        double an = calculateAn(n);
        sum += an;
        n++;
    }

    std::cout << "The smallest n for which the sum exceeds 1000 is: " << n - 1 << std::endl;
    return 0;
}
