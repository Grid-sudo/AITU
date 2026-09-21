#include <iostream>
using namespace std;
int main(){
    const int max = 5;
    int numbers[max];
    int i {0};
    int sum{0};
    while(i < max){
        cin >> numbers[i];
        i++;
    }
    for(i = 0; i < max; i++){
        sum += numbers[i];
    }
    cout << sum << endl;
}
