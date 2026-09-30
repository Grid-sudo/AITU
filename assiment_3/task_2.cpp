#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max{0};
    cin >> max;
    vector<int> values(max);
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    int even{0};
    for(auto j : values){
        if(j == 0){
            continue;
        }else if(j % 2 == 0){
            even += 1;
        }
    }
    cout << even << endl;
}