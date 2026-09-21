#include <iostream>
using namespace std;

int main() {
    int a, sum;
    cin >> a;
    for(int i = 0; i < a; ++i){
        if(a % i == 0){
            sum += 1;
        }
    }
    cout << (sum > 2 ? "Не простое число" : "простое число") << endl;
}
