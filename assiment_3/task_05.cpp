#include <iostream>
#include <vector>
using namespace std;

int main() {
    int max;
    cin >> max;
    vector<int> mas(max);
    vector<int> mas_2(max);
    for (int j = 0; j < max; j++) {
        cin >> mas[j];
        mas_2[j] = mas[j];
    }
    for (int i = 0; i < max / 2; i++) {
        int num = mas[i];
        mas[i] = mas[max - 1 - i];
        mas[max - 1 - i] = num;
    }
    bool isPalindrome = true;
    for (int pop = 0; pop < max; pop++) {
        if (mas[pop] != mas_2[pop]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}