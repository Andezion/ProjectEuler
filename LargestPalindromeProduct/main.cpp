#include <iostream>
#include <string>
#include <algorithm>

int is_palindrome(int num) {
    std::string str = std::to_string(num);
    std::reverse(str.begin(), str.end());
    return str == std::to_string(num);
}

int main() {
    int max_product = 0;
    int best_num1 = 0;
    int best_num2 = 0;

    for (int num1 = 999; num1 >= 100; --num1) {
        for (int num2 = num1; num2 >= 100; --num2) {
            int product = num1 * num2;

            if (product < max_product) { 
                break;
            }

            if (is_palindrome(product)) {
                max_product = product;
                best_num1 = num1;
                best_num2 = num2;
            }
        }
    }

    std::cout << best_num1 << " * " << best_num2 << " = " << max_product << std::endl;
    return 0;
}