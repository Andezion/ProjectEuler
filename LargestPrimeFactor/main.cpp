#include <iostream>

int main() {
    unsigned long long n = 600851475143;
    unsigned long long largest = 1;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (unsigned long long i = 3; i <= n / i; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 1) {
        largest = n;
    }

    std::cout << largest << '\n';

    return 0;
}