#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    std::vector<int> counts(101, 0);
    
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        if (val >= 0 && val <= 100) {
            counts[val]++;
        }
    }

    for (int v = 0; v <= 100; ++v) {
        if (counts[v] > 0) {
            std::cout << v << ":" << counts[v] << "\n";
        }
    }

    return 0;
}