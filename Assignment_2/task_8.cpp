#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int reverse_x = 0;
    while(x > 0){
        reverse_x = (reverse_x * 10) + (x % 10);
        x /= 10;
    }
    cout << reverse_x << endl;
    bool answer = (x == reverse_x) or (x == reverse_x/10);
    if (answer){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}