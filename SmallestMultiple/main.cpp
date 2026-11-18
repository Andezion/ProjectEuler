#include <iostream>

int main() {
    int result = 2520;
    while (true) {
        bool divisible = true;
        for (int i = 1; i <= 20; ++i) {
            if (result % i != 0) {
                divisible = false;
                break;
            }
        }
        if (divisible) {
            std::cout << result << std::endl;
            break;
        }
        result += 2520; 
    }
    return 0;
}