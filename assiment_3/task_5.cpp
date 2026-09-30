#include <iostream>
#include <vector>
using namespace std;
int main(){
    int max = 0;
    int number = 0;
    int sum = 0;
    cout << "Enter number" << endl;
    cin >> number;
    cout << "Enter size of array" << endl;
    cin >> max;
    vector<int> values(max);
    cout << "Enter elements of array" << endl;
    for (int i = 1; i <= max; i++){
        cin >> values[i];
    }
    for(int el : values){
        if(el == number){
            sum += 1;
        }
    }
    cout << "count " << endl;
    cout << sum << endl;
}