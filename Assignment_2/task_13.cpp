#include <iostream>
using namespace std;
int main(){
    int rows{1};
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = rows + 1 - i; j <= rows; j++){
            cout << '*';
        }
        cout << endl;
    }
}