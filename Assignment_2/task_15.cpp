#include <iostream>
using namespace std;
int main(){
    int rows{1};
    cin >> rows;
    int number{0};
    for(int i = 1; i <= rows; i++){
        for(int j = rows + 1 - i; j <= rows; j++){
            number +=1;
            cout << number << " ";
        }
        number = 0;
        cout << endl;
    }
}