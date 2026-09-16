#include <iostream>
using namespace std;
int main() {
    long a, b;
    char op;
    bool is_error = false;
    cin >> a >> b >> op;
    long long result = 0;
    switch (op) {
        case '+':
            result = (a) + b; 
            break;
        case '-':
            result = (a) - b;
            break;
        case '*':
            result = (a) * b;
            break;
        case '/':
            if (b == 0) {
                is_error = true;
                break;
            }
            result = (a) / b;
            break;  
        default:
            is_error = true;  
        }
    if (is_error) {
        cout << "Error\n";
        return 1;
    }

    if ((result < numeric_limits<int>::min()) || (result > numeric_limits<int>::max())) {
        cout << "Overflow\n";
        return 1;
    }
    cout << result << "\n"; 
    return 0;
}