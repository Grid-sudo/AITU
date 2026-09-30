#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    long long main_sum = 0;
    long long secondary_sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int val;
            std::cin >> val;
            if (i == j) {
                main_sum += val;
            }
            if (i + j == n - 1) {
                secondary_sum += val;
            }
        }
    }

    std::cout << main_sum << " " << secondary_sum << "\n";

    return 0;
}