#include <iostream>

unsigned long long factorial(unsigned long long n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    unsigned long long cubes = 20;
    float result = static_cast<float>(factorial(2 * cubes)) / static_cast<float>((factorial(cubes) * factorial(cubes)));
    std::cout << result << std::endl;
    return 0;
}