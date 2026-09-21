#include <iostream>
using namespace std;
int main(){
    int x {123};
    int reverse_x = 0;
    int sum = 0;
    while(x > 0){
        reverse_x = (x % 10);
        sum += reverse_x;
        x /= 10;
    }
    cout << sum << endl;
}