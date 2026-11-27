#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
    std::ifstream in("file.txt");
    std::vector<std::vector<int>> triangle;
    std::string line;
    while (std::getline(in, line)) {
        std::istringstream ss(line);
        std::vector<int> row;
        int x;
        while (ss >> x) row.push_back(x);
        if (!row.empty()) triangle.push_back(row);
    }

    for (int row = static_cast<int>(triangle.size()) - 2; row >= 0; --row) {
        for (int col = 0; col < static_cast<int>(triangle[row].size()); ++col) {
            triangle[row][col] += std::max(triangle[row + 1][col], triangle[row + 1][col + 1]);
        }
    }

    std::cout << triangle[0][0] << '\n';

    return 0;
}