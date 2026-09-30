#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    int sum = 0;
    cin >> max;
    vector<int> values(max);
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    for( int j = 0; j <= max; j++){
        sum += values[j];
    }
    cout << sum << endl;
}
 