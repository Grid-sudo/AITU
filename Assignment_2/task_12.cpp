#include <iostream>
#include <vector> 
using namespace std;

int main(){
    int max = 0;
    cout << "Введите размер массива" << endl;
    cin >> max;
    vector<int> numbers(max);
    
    int i = 0;
    while(i < max){
        cin >> numbers[i];
        i++;
    }
    int max_size = numbers[0];
    for(i = 0; i < max; i++){
        if(numbers[i] > max_size){
            max_size = numbers[i];

        }
    }
    cout << "Максимально число"<< max_size << endl;
    return 0;
}