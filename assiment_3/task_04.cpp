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
    for(int pop : values){
        if(pop <= 0){
            pop = 0;
        }
        cout << pop << endl;
    }
}