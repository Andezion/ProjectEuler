#include <iostream>
#include <map>

int main() {
    std::map<int, int> storage;

    for (int i = 1; i <= 20; ++i) {
        storage[i] = 0;
    }

    for (int i = 30; i <= 100; i += 10) {
        storage[i] = 0;
    }
    
    std::map<int, std::string> numbers = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
        {10, "ten"},
        {11, "eleven"},
        {12, "twelve"},
        {13, "thirteen"},
        {14, "fourteen"},
        {15, "fifteen"},
        {16, "sixteen"},
        {17, "seventeen"},
        {18, "eighteen"},
        {19, "nineteen"},
        {20, "twenty"},
        {30, "thirty"},
        {40, "forty"},
        {50, "fifty"},
        {60, "sixty"},
        {70, "seventy"},
        {80, "eighty"},
        {90, "ninety"},
        {100, "hundred"},
        {1000, "thousand"}
    };

    for (int i = 1; i < 1000; i++) {
        if (i >= 100) {
            storage[100]++;

            int a = i / 100;
            storage[a]++;

            int b = i - a * 100;
            if (b != 0) {
                if (b <= 20) {
                    storage[b]++;
                } else {
                    int c = b % 10;
                    if (c != 0) {
                        storage[c]++;
                    }
                    int d = b - c;
                    if (d != 0) {
                        storage[d]++;
                    }
                }
            }
        } else if (i > 20) {
            int b = i % 10;
            if (b != 0) {
                storage[b]++;
            }
            int a = i - b;
            if (a != 0) {
                storage[a]++;
            }
        } else {
            if (i != 0) {
                storage[i]++;
            }
        }
    }
    storage[1]++;
    storage[1000]++;

    std::cout << std::endl;
    for (auto [a, b] : storage) {
        std::cout << a << ' ' << b << std::endl;
    } 
    std::cout << std::endl;

    unsigned long long total = 0;
    for (auto [a, b] : storage) {
        total += b * numbers[a].size();
    }

    std::string and_str = "and";
    total += 891 * and_str.size(); // handle "and"

    std::cout << "Total letters: " << total << std::endl;
    return 0;
}