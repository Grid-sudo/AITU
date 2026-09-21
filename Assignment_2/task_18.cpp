#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int reverse_a{0};
    while(a > 0){
        reverse_a = (reverse_a * 10) + (a % 10);
        a /= 10;
    }
    cout << reverse_a << endl;
}