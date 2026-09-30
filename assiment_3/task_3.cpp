#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    cin >> max;
    vector<int> values(max);
    int max_values_1 = values[0];
    int index = 0;
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    for(int j = 0; j <= max; j++){
        if(values[j] >= max_values_1){
            max_values_1 = values[j];
            index = j - 1;
        }
    }
    cout << "Максимально значение " << max_values_1 << " " << "Индекс " << index << endl;
}
