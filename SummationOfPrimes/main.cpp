#include <iostream>

int main() {
    unsigned long long sum = 0LL;
    for (unsigned long long i = 2; i < 2000000; ++i) {
        bool is_prime = true;
        for (unsigned long long j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}