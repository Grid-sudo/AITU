#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    cin >> max;
    vector<int> values(max);
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }

    float sum = 0;
    for(int j = 1; j <= max; j++){
        sum += values[j];
    }
    cout << sum / max << endl;
}