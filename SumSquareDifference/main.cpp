#include <iostream>

int main() {
    int sum_of_numbers = (1 + 100) * 100 / 2;
    int sum_of_squares = 0;
    for (int i = 1; i <= 100; ++i) {
        sum_of_squares += i * i;
    }
    int difference = sum_of_numbers * sum_of_numbers - sum_of_squares;
    std::cout << difference << std::endl;
    return 0;
}