#include <iostream>

unsigned long long divisor_counter(unsigned long long number) {
    unsigned long long count = 2;
    for (unsigned long long i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            count += 2;
        }
    }
    return count;
}

int main() {
    unsigned long long result = 0LL;
    unsigned long long n = 1, a, b;
    while (true) {
        if (n % 2 == 0) {
            a = n / 2;
            b = n + 1;
        } else {
            a = n;
            b = (n + 1) / 2;
        }

        if (divisor_counter(a) * divisor_counter(b) > 500) {
            result = a * b;
            break;
        }
        ++n;
    }

    std::cout << result << std::endl;
    return 0;
}