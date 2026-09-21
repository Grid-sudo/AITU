#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    long long x_1 = 1; 
    long long x_2 = 1;
    for (int i = 1; i <= a; ++i) {
        cout << x_1 << " "; 
        long long next = x_1 + x_2; 
        x_1 = x_2;               
        x_2 = next;              
    }
    cout << endl;
}
