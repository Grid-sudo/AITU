#include <iostream>

using namespace std;
int main(){
    int a;
    cin >> a;
    if (a >= 90){
        cout << "A" << endl;
    } else if(a >= 75){
        cout << "B" << endl;
    }else if(a >= 50){
        cout << "C" << endl;
    }else{
        cout << "F" << endl;
    }
    return 0;
}