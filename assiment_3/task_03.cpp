#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max;
    cin >> max;
    vector<int> values(max);
    for (int i = 0; i < max; i++){
        cin >> values[i];
    }
    int negative = 0;
    int zero = 0;
    int positive = 0;
    for(int j : values){
        if(j == 0){
            zero += 1;
        }else if(j < 0){
            negative += 1;
        }else{
            positive += 1;
        }
    }
    cout << "positive " << positive << " " << "negative " << negative << " " << "zero " << zero << endl;
}