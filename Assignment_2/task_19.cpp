#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int max{0};
    if(a > b){
        max = a;
    }else{
        max = b;
    }
    for(int i = max; ;i++){
        if(i % a == 0 and i % b == 0){
            cout << i << endl;
            break;
        }
    }
}