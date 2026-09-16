#include <iostream>

using namespace std;
int main(){
    int x {123456};
    int reverse_x = 0;
    while(x > 0){
        reverse_x = (reverse_x * 10) + (x % 10);
        x /= 10;
    }
    cout << reverse_x << endl;
}