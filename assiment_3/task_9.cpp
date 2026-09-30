#include <iostream>
#include <vector>

int main() {
    int r, c;
    if (!(std::cin >> r >> c)) {
        return 0;
    }

    std::vector<std::vector<int>> matrix(r, std::vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < c; ++j) {
        for (int i = 0; i < r; ++i) {
            std::cout << matrix[i][j];
            if (i < r - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}