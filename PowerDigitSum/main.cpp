#include <iostream>
#include <array>

int main(void) {
    std::array<unsigned char, 302> digits{};
    digits[0] = 1;
    int size = 1;

    for (int to_power = 0; to_power < 1000; ++to_power) {
        int carry = 0;
        for (int i = 0; i < size; ++i) {
            int product = digits[i] * 2 + carry;
            digits[i] = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            digits[size++] = carry % 10;
            carry /= 10;
        }
    }

    unsigned long long sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += digits[i];
    }

    std::cout << sum << std::endl;

    return 0;
}