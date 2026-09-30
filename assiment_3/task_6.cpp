#include <iostream>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) {
        std::cout << std::endl;
        return 0;
    }

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    bool first = true;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            if (!first) {
                std::cout << " ";
            }
            std::cout << arr[i];
            first = false;
        }
    }

    std::cout << std::endl;
    return 0;
}