#include <iostream>
using namespace std;
int main(){
    int a {}, b {};
    char operation {};
    cin >> a >> b >> operation;
    switch(operation){
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if(b != 0){
                cout << a / b << endl;
            }else{
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid operation" << endl;
    }

}