#include <iostream>

int main() {
    unsigned long long n1 = 1, n2 = 2, sum = 0;
    while (n2 < 4000000) {
        if (n2 % 2 == 0) {
            sum += n2;
        }
        unsigned long long next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
    std::cout << sum << std::endl;
    return 0;
}