#include <iostream>

int main(void) {
    long long result_number = 1;
    long long longest_length = 0;

    for (long long i = 1; i < 1000000; i++) {
        long long current_lenght = 0;
        long long current_number = i;

        while (current_number != 1) {
            if (current_number % 2 == 0) {
                current_number /= 2;
            } else {
                current_number = 3 * current_number + 1;
            }
            current_lenght++;
        }

        if (current_lenght > longest_length) {
            longest_length = current_lenght;
            result_number = i;
        }
    }

    std::cout << result_number << std::endl;

    return 0;
}