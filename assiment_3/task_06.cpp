#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) {
        return 0;
    }

    vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    cout << values[0];
    for (int i = 1; i < n; i++) {
        if (values[i] != values[i - 1]) {
            cout << " " << values[i];
        }
    }
    cout << endl;

    return 0;
}