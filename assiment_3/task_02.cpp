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
    int max_values_1 = values[0];
    int max_values_2 = values[0];
    for(int j = 0; j < max; j++){
        if(values[j] > max_values_1){
            max_values_2 = max_values_1;
            max_values_1 = values[j];
        }else if (values[j] < max_values_1 && (values[j] > max_values_2 || max_values_1 == max_values_2)) {
            max_values_2 = values[j];
        }
    }
    cout <<  max_values_1 << " " << max_values_2 << endl;
}