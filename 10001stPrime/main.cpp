#include <iostream>

int main() {
    int counter = 0;
    int result = 0;
    while (counter != 10001) {
        bool is_prime = true;
        for (int i = 2; i * i <= result; ++i) {
            if (result % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            ++counter;
        }
        if (counter != 10001) {
            ++result;
        }
    }
    std::cout << result << std::endl;
    return 0;
}