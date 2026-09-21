#include <iostream>
using namespace std;
int main(){
    string text;
    int sum {0};
    cin >> text;
    for (const char n : text)
    {
        if(n == 'a' or n == 'e' or n == 'i' or n == 'o' or n == 'u'){
            sum +=1;
        }
    }
    cout << sum << endl;
}