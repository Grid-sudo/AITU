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
    for(int i = 0; i < max;i++){
        mas[i] = mas_2[max - 1 - i];
    }
    for(int el : mas){
        cout << el << endl;
    }
}