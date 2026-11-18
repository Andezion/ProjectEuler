#include <iostream>

int main() {
    // a^2 + b^2 = c^2
    // a + b + c = 1000
    // a^2 + b^2 + c^2 + 2ab + 2ac + 2bc = 1000^2
    // 2a^2 + 2b^2 + 2ab + 2ac + 2bc = 1000^2
    // 2 (a^2 + b^2 + ab + ac + bc) = 1000^2
    // a^2 + b^2 + ab + ac + bc = 500000
    // с = 1000 - a - b -> a^2 + b^2 + ab + a(1000 - a - b) + b(1000 - a - b) = 500000
    // a^2 + b^2 + ab + 1000a - a^2 - ab + 1000b - ab - b^2 = 500000
    // 1000a + 1000b - ab = 500000
    // b = (500000 - 1000a) / (1000 - a)
    // c = 1000 - a - (500000 - 1000a) / (1000 - a)
    // a < 332
    for (int a = 1; a < 332; ++a) {
        int b = (500000 - 1000 * a) / (1000 - a);
        int c = 1000 - a - b;
        if (a * a + b * b == c * c) {
            std::cout << a * b * c << std::endl;
            break;
        }
    }
    return 0;
}